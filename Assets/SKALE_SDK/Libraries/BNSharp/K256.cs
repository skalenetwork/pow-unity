using System;

namespace BNSharp
{
    public class K256 : MPrime
    {
        public K256() : base("k256", "ffffffff ffffffff ffffffff ffffffff ffffffff ffffffff fffffffe fffffc2f")
        {

        }

        public override void Split(BN input, BN output)
        {
            // 256 = 9 * 26 + 22
            var mask = 0x3fffff;

            var outLen = Math.Min(input.Length, 9);
            Array.Resize(ref output.words, outLen);
            int i;
            for (i = 0; i < outLen; i++)
            {
                output.words[i] = input.words[i];
            }
            output.Length = outLen;

            if (input.Length <= 9)
            {
                input.words[0] = 0;
                input.Length = 1;
                return;
            }

            // Shift by 9 limbs
            var prev = input.words[9];
            Array.Resize(ref output.words, output.Length + 1);
            output.words[output.Length++] = prev & mask;

            for (i = 10; i < input.Length; i++)
            {
                var next = input.words[i] | 0;
                input.words[i - 10] = ((next & mask) << 4) | (prev >> 22);
                prev = next;
            }
            prev >>= 22;
            input.words[i - 10] = prev;
            if (prev == 0 && input.Length > 10)
            {
                input.Length -= 10;
            }
            else
            {
                input.Length -= 9;
            }
        }

        public override BN ImulK(BN num)
        {
            // K = 0x1000003d1 = [ 0x40, 0x3d1 ]
            Array.Resize(ref num.words, num.Length + 2);
            num.words[num.Length] = 0;
            num.words[num.Length + 1] = 0;
            num.Length += 2;

            // bounded at: 0x40 * 0x3ffffff + 0x3d0 = 0x100000390
            long lo = 0;
            for (var i = 0; i < num.Length; i++)
            {
                var w = (long)num.words[i] | 0;
                lo += w * 0x3d1;
                num.words[i] = (int)(lo & 0x3ffffff);
                lo = w * 0x40 + ((lo / 0x4000000) | 0);
            }

            // Fast length reduction
            if (num.words[num.Length - 1] == 0)
            {
                num.Length--;
                if (num.words[num.Length - 1] == 0)
                {
                    num.Length--;
                }
            }
            return num;
        }
    }
}
