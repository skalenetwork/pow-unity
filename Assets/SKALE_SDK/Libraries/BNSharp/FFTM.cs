using System;

namespace BNSharp
{
    // Cooley-Tukey algorithm for FFT
    // slightly revisited to rely on looping instead of recursion
    internal class FFTM
    {
        private int x;
        private int y;

        public FFTM(int x, int y)
        {
            this.x = x;
            this.y = y;
        }

        public int[] MakeRBT(int N)
        {
            var t = new int[N];
            var l = BN._countBits(N) - 1;
            for (var i = 0; i < N; i++)
            {
                t[i] = this.RevBin(i, l, N);
            }

            return t;
        }

        // Returns binary-reversed representation of `x`
        public int RevBin(int x, int l, int N)
        {
            if (x == 0 || x == N - 1) return x;

            var rb = 0;
            for (var i = 0; i < l; i++)
            {
                rb |= (x & 1) << (l - i - 1);
                x >>= 1;
            }

            return rb;
        }

        // Performs "tweedling" phase, therefore 'emulating'
        // behaviour of the recursive algorithm
        public void Permute(int[] rbt, int[] rws, int[] iws, int[] rtws, int[] itws, int N)
        {
            for (var i = 0; i < N; i++)
            {
                rtws[i] = rws[rbt[i]];
                itws[i] = iws[rbt[i]];
            }
        }

        public void Transform(int[] rws, int[] iws, int[] rtws, int[] itws, int N, int[] rbt)
        {
            this.Permute(rbt, rws, iws, rtws, itws, N);

            for (var s = 1; s < N; s <<= 1)
            {
                var l = s << 1;

                var rtwdf = (int)Math.Cos(2 * Math.PI / l);
                var itwdf = (int)Math.Sin(2 * Math.PI / l);

                for (var p = 0; p < N; p += l)
                {
                    var rtwdf_ = rtwdf;
                    var itwdf_ = itwdf;

                    for (var j = 0; j < s; j++)
                    {
                        var re = rtws[p + j];
                        var ie = itws[p + j];

                        var ro = rtws[p + j + s];
                        var io = itws[p + j + s];

                        var rx = rtwdf_ * ro - itwdf_ * io;

                        io = rtwdf_ * io + itwdf_ * ro;
                        ro = rx;

                        rtws[p + j] = re + ro;
                        itws[p + j] = ie + io;

                        rtws[p + j + s] = re - ro;
                        itws[p + j + s] = ie - io;

                        /* jshint maxdepth : false */
                        if (j != l)
                        {
                            rx = rtwdf * rtwdf_ - itwdf * itwdf_;

                            itwdf_ = rtwdf * itwdf_ + itwdf * rtwdf_;
                            rtwdf_ = rx;
                        }
                    }
                }
            }
        }

        public int GuessLen13b(int n, int m)
        {
            var N = Math.Max(m, n) | 1;
            var odd = N & 1;
            var i = 0;
            for (N = N / 2 | 0; N != 0; N = N >> 1)
            {
                i++;
            }

            return 1 << i + 1 + odd;
        }

        public void Conjugate(int[] rws, int[] iws, int N)
        {
            if (N <= 1) return;

            for (var i = 0; i < N / 2; i++)
            {
                var t = rws[i];

                rws[i] = rws[N - i - 1];
                rws[N - i - 1] = t;

                t = iws[i];

                iws[i] = -iws[N - i - 1];
                iws[N - i - 1] = -t;
            }
        }

        public int[] Normalize13b(int[] ws, int N)
        {
            var carry = 0;
            for (var i = 0; i < N / 2; i++)
            {
                var w = (int)Math.Round((double)ws[2 * i + 1] / N) * 0x2000 +
                  (int)Math.Round((double)ws[2 * i] / N) +
                  carry;

                ws[i] = w & 0x3ffffff;

                if (w < 0x4000000)
                {
                    carry = 0;
                }
                else
                {
                    carry = w / 0x4000000 | 0;
                }
            }

            return ws;
        }

        public void Convert13b(int[] ws, int len, int[] rws, int N)
        {
            var carry = 0;
            int i;
            for (i = 0; i < len; i++)
            {
                carry = carry + (ws[i] | 0);

                rws[2 * i] = carry & 0x1fff; carry = carry >> 13;
                rws[2 * i + 1] = carry & 0x1fff; carry = carry >> 13;
            }

            // Pad with zeroes
            for (i = 2 * len; i < N; ++i)
            {
                rws[i] = 0;
            }

            if (carry != 0) throw new BNException();
            if ((carry & ~0x1fff) != 0) throw new BNException();
        }

        public int[] Stub(int N)
        {
            var ph = new int[N];
            for (var i = 0; i < N; i++)
            {
                ph[i] = 0;
            }

            return ph;
        }

        public BN Mulp(BN x, BN y, BN @out)
        {
            var N = 2 * this.GuessLen13b(x.Length, y.Length);

            var rbt = this.MakeRBT(N);

            var _ = this.Stub(N);

            var rws = new int[N];
            var rwst = new int[N];
            var iwst = new int[N];

            var nrws = new int[N];
            var nrwst = new int[N];
            var niwst = new int[N];

            var rmws = new int[N];
            Array.Copy(@out.words, 0, rmws, 0, Math.Min(@out.words.Length, N));

            this.Convert13b(x.words, x.Length, rws, N);
            this.Convert13b(y.words, y.Length, nrws, N);

            this.Transform(rws, _, rwst, iwst, N, rbt);
            this.Transform(nrws, _, nrwst, niwst, N, rbt);

            for (var i = 0; i < N; i++)
            {
                var rx = rwst[i] * nrwst[i] - iwst[i] * niwst[i];
                iwst[i] = rwst[i] * niwst[i] + iwst[i] * nrwst[i];
                rwst[i] = rx;
            }

            this.Conjugate(rwst, iwst, N);
            this.Transform(rwst, iwst, rmws, _, N, rbt);
            this.Conjugate(rmws, _, N);
            this.Normalize13b(rmws, N);

            @out.Negative = x.Negative ^ y.Negative;
            @out.Length = x.Length + y.Length;
            @out.words = rmws; //?
            return @out._strip();
        }
    }
}
