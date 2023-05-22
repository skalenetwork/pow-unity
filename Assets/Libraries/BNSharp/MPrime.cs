using System;

namespace BNSharp
{
    public class MPrime
    {
        public string name;
        public BN p;
        private int n;
        private BN k;
        private BN tmp;

        public MPrime(string name, string p)
        {
            this.name = name;
            this.p = new BN(p, 16);
            this.n = this.p.BitLength();
            this.k = new BN(1).Iushln(this.n).Isub(this.p);

            this.tmp = this._tmp();
        }

        private BN _tmp()
        {
            var tmp = new BN();
            tmp.words = new int[(int)Math.Ceiling((double)this.n / 13)];
            return tmp;
        }

        public BN Ireduce(BN num)
        {
            // Assumes that `num` is less than `P^2`
            // num = HI * (2 ^ N - K) + HI * K + LO = HI * K + LO (mod P)
            var r = num;
            int rlen;

            do
            {
                this.Split(r, this.tmp);
                r = this.ImulK(r);
                r = r.Iadd(this.tmp);
                rlen = r.BitLength();
            } while (rlen > this.n);

            var cmp = rlen < this.n ? -1 : r.Ucmp(this.p);
            if (cmp == 0)
            {
                r.words[0] = 0;
                r.Length = 1;
            }
            else if (cmp > 0)
            {
                r.Isub(this.p);
            }
            else
            {
                // r is a BN v5 instance
                r._strip();
            }

            return r;
        }

        public virtual void Split(BN input, BN @out)
        {
            input.Iushrn(this.n, 0, @out);
        }

        public virtual BN ImulK(BN num)
        {
            return num.Imul(this.k);
        }
    }
}
