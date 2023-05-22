namespace BNSharp
{
    public class P25519 : MPrime
    {
        // 2 ^ 255 - 19
        public P25519() : base("25519", "7fffffffffffffff ffffffffffffffff ffffffffffffffff ffffffffffffffed")
        {

        }

        public override BN ImulK(BN num)
        {
            // K = 0x13
            var carry = 0;
            for (var i = 0; i < num.Length; i++)
            {
                var hi = (num.words[i] | 0) * 0x13 + carry;
                var lo = hi & 0x3ffffff;
                hi >>= 26;

                num.words[i] = lo;
                carry = hi;
            }
            if (carry != 0)
            {
                num.words[num.Length++] = carry;
            }
            return num;
        }
    }
}
