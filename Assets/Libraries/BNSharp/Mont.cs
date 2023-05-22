namespace BNSharp
{
    //
    // A reduce context, could be using montgomery or something better, depending
    // on the `m` itself.
    //
    public class Mont : Red
    {
        private int shift;
        private BN r;
        private BN r2;
        private BN rinv;
        private BN minv;

        /// <summary>
        /// 
        /// </summary>
        /// <param name="m"></param>
        /// <exception cref="BNException"></exception>
        public Mont(string m) : base(m)
        {
            _init();
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="m"></param>
        /// <exception cref="BNException"></exception>
        public Mont(BN m) : base(m)
        {
            _init();
        }

        private void _init()
        {
            this.shift = this.m.BitLength();
            if (this.shift % 26 != 0)
            {
                this.shift += 26 - (this.shift % 26);
            }

            this.r = new BN(1).Iushln(this.shift);
            this.r2 = this.Imod(this.r.Sqr());
            this.rinv = this.r._invmp(this.m);

            this.minv = this.rinv.Mul(this.r).Isubn(1).Div(this.m);
            this.minv = this.minv.Umod(this.r);
            this.minv = this.r.Sub(this.minv);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public override BN Imul(BN a, BN b)
        {
            if (a.IsZero() || b.IsZero())
            {
                a.words[0] = 0;
                a.Length = 1;
                return a;
            }

            var t = a.Imul(b);
            var c = t.Maskn(this.shift).Mul(this.minv).Imaskn(this.shift).Mul(this.m);
            var u = t.Isub(c).Iushrn(this.shift);
            var res = u;

            if (u.Cmp(this.m) >= 0)
            {
                res = u.Isub(this.m);
            }
            else if (u.Cmpn(0) < 0)
            {
                res = u.Iadd(this.m);
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
        public override BN Mul(BN a, BN b)
        {
            if (a.IsZero() || b.IsZero()) return new BN(0)._forceRed(this);

            var t = a.Mul(b);
            var c = t.Maskn(this.shift).Mul(this.minv).Imaskn(this.shift).Mul(this.m);
            var u = t.Isub(c).Iushrn(this.shift);
            var res = u;
            if (u.Cmp(this.m) >= 0)
            {
                res = u.Isub(this.m);
            }
            else if (u.Cmpn(0) < 0)
            {
                res = u.Iadd(this.m);
            }

            return res._forceRed(this);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="a"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public override BN Invm(BN a)
        {
            // (AR)^-1 * R^2 = (A^-1 * R^-1) * R^2 = A^-1 * R
            var res = this.Imod(a._invmp(this.m).Mul(this.r2));
            return res._forceRed(this);
        }

        public override BN ConvertTo(BN num)
        {
            return this.Imod(num.Ushln(this.shift));
        }

        public override BN ConvertFrom(BN num)
        {
            var r = this.Imod(num.Mul(this.rinv));
            r.red = null;
            return r;
        }
    }
}
