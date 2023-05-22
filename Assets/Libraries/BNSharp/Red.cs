namespace BNSharp
{
    //
    // A reduce context, could be using montgomery or something better, depending
    // on the `m` itself.
    //
    public class Red
    {
        protected BN m;
        public MPrime? prime;

        public Red(string m)
        {
            var prime = BN.Prime(m);
            this.m = prime.p;
            this.prime = prime;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="m"></param>
        /// <exception cref="BNException"></exception>
        public Red(BN m)
        {
            Functions.Assert(m.Gtn(1), "modulus must be greater than 1");
            this.m = m;
            this.prime = null;
        }

        internal void _verify1(BN a)
        {
            Functions.Assert(a.Negative == 0, "red works only with positives");
            Functions.Assert(a.red != null, "red works only with red numbers");
        }

        internal void _verify2(BN a, BN b)
        {
            Functions.Assert((a.Negative | b.Negative) == 0, "red works only with positives");
            Functions.Assert(a.red != null && a.red == b.red,
              "red works only with red numbers");
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="a"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Imod(BN a)
        {
            if (this.prime != null) return this.prime.Ireduce(a)._forceRed(this);

            BN.move(a, a.Umod(this.m)._forceRed(this));
            return a;
        }

        public BN Neg(BN a)
        {
            if (a.IsZero())
            {
                return a.Clone();
            }

            return this.m.Sub(a)._forceRed(this);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Add(BN a, BN b)
        {
            this._verify2(a, b);

            var res = a.Add(b);
            if (res.Cmp(this.m) >= 0)
            {
                res.Isub(this.m);
            }
            return res._forceRed(this);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Iadd(BN a, BN b)
        {
            this._verify2(a, b);

            var res = a.Iadd(b);
            if (res.Cmp(this.m) >= 0)
            {
                res.Isub(this.m);
            }
            return res;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Sub(BN a, BN b)
        {
            this._verify2(a, b);

            var res = a.Sub(b);
            if (res.Cmpn(0) < 0)
            {
                res.Iadd(this.m);
            }
            return res._forceRed(this);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Isub(BN a, BN b)
        {
            this._verify2(a, b);

            var res = a.Isub(b);
            if (res.Cmpn(0) < 0)
            {
                res.Iadd(this.m);
            }
            return res;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="a"></param>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Shl(BN a, int num)
        {
            this._verify1(a);
            return this.Imod(a.Ushln(num));
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public virtual BN Imul(BN a, BN b)
        {
            this._verify2(a, b);
            return this.Imod(a.Imul(b));
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public virtual BN Mul(BN a, BN b)
        {
            this._verify2(a, b);
            return this.Imod(a.Mul(b));
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="a"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Isqr(BN a)
        {
            return this.Imul(a, a.Clone());
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="a"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Sqr(BN a)
        {
            return this.Mul(a, a);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="a"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Sqrt(BN a)
        {
            if (a.IsZero()) return a.Clone();

            var mod3 = this.m.Andln(3);
            Functions.Assert(mod3 % 2 == 1);

            // Fast case
            if (mod3 == 3)
            {
                var pow = this.m.Add(new BN(1)).Iushrn(2);
                return this.Pow(a, pow);
            }

            // Tonelli-Shanks algorithm (Totally unoptimized and slow)
            //
            // Find Q and S, that Q * 2 ^ S = (P - 1)
            var q = this.m.Subn(1);
            var s = 0;
            while (!q.IsZero() && q.Andln(1) == 0)
            {
                s++;
                q.Iushrn(1);
            }
            Functions.Assert(!q.IsZero());

            var one = new BN(1).ToRed(this);
            var nOne = one.RedNeg();

            // Find quadratic non-residue
            // NOTE: Max is such because of generalized Riemann hypothesis.
            var lpow = this.m.Subn(1).Iushrn(1);
            var z0 = this.m.BitLength();
            var z = new BN(2 * z0 * z0).ToRed(this);

            while (this.Pow(z, lpow).Cmp(nOne) != 0)
            {
                z.RedIAdd(nOne);
            }

            var c = this.Pow(z, q);
            var r = this.Pow(a, q.Addn(1).Iushrn(1));
            var t = this.Pow(a, q);
            var m = s;
            while (t.Cmp(one) != 0)
            {
                var tmp = t;
                int i;
                for (i = 0; tmp.Cmp(one) != 0; i++)
                {
                    tmp = tmp.RedSqr();
                }
                Functions.Assert(i < m);
                var b = this.Pow(c, new BN(1).Iushln(m - i - 1));

                r = r.RedMul(b);
                c = b.RedSqr();
                t = t.RedMul(c);
                m = i;
            }

            return r;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="a"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public virtual BN Invm(BN a)
        {
            var inv = a._invmp(this.m);
            if (inv.Negative != 0)
            {
                inv.Negative = 0;
                return this.Imod(inv).RedNeg();
            }
            else
            {
                return this.Imod(inv);
            }
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="a"></param>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Pow(BN a, BN num)
        {
            if (num.IsZero()) return new BN(1).ToRed(this);
            if (num.Cmpn(1) == 0) return a.Clone();

            var windowSize = 4;
            var wnd = new BN[1 << windowSize];
            wnd[0] = new BN(1).ToRed(this);
            wnd[1] = a;
            int i;
            for (i = 2; i < wnd.Length; i++)
            {
                wnd[i] = this.Mul(wnd[i - 1], a);
            }

            var res = wnd[0];
            var current = 0;
            var currentLen = 0;
            var start = num.BitLength() % 26;
            if (start == 0)
            {
                start = 26;
            }

            for (i = num.Length - 1; i >= 0; i--)
            {
                var word = num.words[i];
                for (var j = start - 1; j >= 0; j--)
                {
                    var bit = (word >> j) & 1;
                    if (res != wnd[0])
                    {
                        res = this.Sqr(res);
                    }

                    if (bit == 0 && current == 0)
                    {
                        currentLen = 0;
                        continue;
                    }

                    current <<= 1;
                    current |= bit;
                    currentLen++;
                    if (currentLen != windowSize && (i != 0 || j != 0)) continue;

                    res = this.Mul(res, wnd[current]);
                    currentLen = 0;
                    current = 0;
                }
                start = 26;
            }

            return res;
        }

        public virtual BN ConvertTo(BN num)
        {
            var r = num.Umod(this.m);

            return r == num ? r.Clone() : r;
        }

        public virtual BN ConvertFrom(BN num)
        {
            var res = num.Clone();
            res.red = null;
            return res;
        }
    }
}
