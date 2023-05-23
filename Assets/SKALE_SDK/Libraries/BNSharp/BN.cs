using BNSharp.Extensions;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

namespace BNSharp
{
    public partial class BN
    {
        internal static int wordSize = 26;

        public int Negative;
        public int[] words;
        public int Length;
        internal Red  red;

        public BN()
        {
            this.Negative = 0;
            this.words = null;
            this.Length = 0;

            // Reduction context
            this.red = null;
        }

        public BN(BN number) : this()
        {
            number.Copy(this);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="number"></param>
        /// <param name="endian"></param>
        /// <exception cref="BNException"></exception>
        public BN(long number, Endian endian = Endian.BigEndian) : this(number, 10, endian)
        {

        }

        public BN(byte[]  number, Endian endian = Endian.BigEndian) : this(number, 10, endian)
        {

        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="number"></param>
        /// <param name="endian"></param>
        /// <exception cref="BNException"></exception>
        public BN(string number, Endian endian = Endian.BigEndian) : this(number, 10, endian)
        {

        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="number"></param>
        /// <param name="base"></param>
        /// <param name="endian"></param>
        /// <exception cref="BNException"></exception>
        public BN(long number, string @base, Endian endian = Endian.BigEndian) : this(number, _baseStringToInt(@base), endian)
        {

        }

        public BN(byte[] number, string @base, Endian endian = Endian.BigEndian) : this(number, _baseStringToInt(@base), endian)
        {

        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="number"></param>
        /// <param name="base"></param>
        /// <param name="endian"></param>
        /// <exception cref="BNException"></exception>
        public BN(string number, string @base, Endian endian = Endian.BigEndian) : this(number, _baseStringToInt(@base), endian)
        {

        }

        public BN(byte[] number, int @base, Endian endian = Endian.BigEndian) : this()
        {
            if (number != null)
            {
                this._init(number, (int)@base, endian);
            }
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="number"></param>
        /// <param name="base"></param>
        /// <param name="endian"></param>
        /// <exception cref="BNException"></exception>
        public BN(long number, int @base, Endian endian = Endian.BigEndian) : this()
        {
            this._init(number, (int)@base, endian);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="number"></param>
        /// <param name="base"></param>
        /// <param name="endian"></param>
        /// <exception cref="BNException"></exception>
        public BN(string number, int @base, Endian endian = Endian.BigEndian) : this()
        {
            if (number != null)
            {
                this._init(number, (int)@base, endian);
            }
        }

        private static int _baseStringToInt(string @base)
        {
            int baseInt = 10;
            if (@base == "hex")
            {
                baseInt = 16;
            }

            return baseInt;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="number"></param>
        /// <returns>True if the supplied object is a BN instance</returns>
        public static bool IsBN(object number)
        {
            if (number is BN) {
                return true;
            }

            return false;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="left"></param>
        /// <param name="right"></param>
        /// <returns>`left` if (`left` > `right`)</returns>
        public static BN Max(BN left, BN right)
        {
            if (left.Cmp(right) > 0) return left;
            return right;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="left"></param>
        /// <param name="right"></param>
        /// <returns>`left` if (`left` < `right`)</returns>
        public static BN Min(BN left, BN right)
        {
            if (left.Cmp(right) < 0) return left;
            return right;
        }

        private void _init(long number, int @base, Endian endian)
        {
            this._initNumber(number, @base, endian);
        }

        private void _init(byte[] number, int @base, Endian endian)
        {
            this._initArray(number, @base, endian);
        }

        private void _init(string number, int @base, Endian endian)
        {
            Functions.Assert(@base == (@base | 0) && @base >= 2 && @base <= 36);

            number = Regex.Replace(number.ToString(), @"\s+", "");

            int start = 0;
            if (number[0] == '-')
            {
                start++;
                this.Negative = 1;
            }

            if (start < number.Length)
            {
                if (@base == 16)
                {
                    this._parseHex(number, start, endian);
                }
                else
                {
                    this._parseBase(number, @base, start);
                    if (endian == Endian.LittleEndian)
                    {
                        this._initArray(this.ToArray(), @base, endian);
                    }
                }
            }
        }

        private void _initNumber(long number, int @base, Endian endian)
        {
            if (number < 0)
            {
                this.Negative = 1;
                number = -number;
            }
            if (number < 0x4000000)
            {
                this.words = new[] { (int)(number & 0x3ffffff) };
                this.Length = 1;
            }
            else if (number < 0x10000000000000)
            {
                this.words = new[] {
                  (int)(number & 0x3ffffff),
                  (int)((number / 0x4000000) & 0x3ffffff)
                };
                this.Length = 2;
            }
            else
            {
                Functions.Assert(number < 0x20000000000000); // 2 ^ 53 (unsafe)
                this.words = new[] {
                  (int)(number & 0x3ffffff),
                  (int)((number / 0x4000000) & 0x3ffffff),
                  1
                };
                this.Length = 3;
            }

            if (endian != Endian.LittleEndian) return;

            // Reverse the bytes
            this._initArray(this.ToArray(), @base, endian);
        }

        private void _initArray(byte[] number, int @base, Endian endian)
        {
            if (number.Length <= 0)
            {
                this.words = new int[] { 0 };
                this.Length = 1;
                return;
            }

            this.Length = (int)Math.Ceiling((double)number.Length / 3);
            this.words = new int[this.Length];
            for (var i = 0; i < this.Length; i++)
            {
                this.words[i] = 0;
            }

            uint w;
            var off = 0;
            if (endian == Endian.BigEndian)
            {
                for (int i = number.Length - 1, j = 0; i >= 0; i -= 3)
                {
                    var first = number[i];
                    var second = (i - 1 >= 0) ? (number[i - 1] << 8) : 0;
                    var third = (i - 2 >= 0) ? (number[i - 2] << 16) : 0;
                    w = (uint)(first | second | third);
                    this.words[j] |= (int)((w << off) & 0x3ffffff);
                    if (j + 1 >= this.words.Length)
                    {
                        Array.Resize(ref this.words, j + 2);
                        this.Length = j + 2;
                    }
                    this.words[j + 1] = (int)((w >> (26 - off)) & 0x3ffffff);
                    off += 24;
                    if (off >= 26)
                    {
                        off -= 26;
                        j++;
                    }
                }
            }
            else if (endian == Endian.LittleEndian)
            {
                for (int i = 0, j = 0; i < number.Length; i += 3)
                {
                    var first = number[i];
                    var second = (i + 1 < number.Length) ? (number[i + 1] << 8) : 0;
                    var third = (i + 2 < number.Length) ? (number[i + 2] << 16) : 0;
                    w = (uint)(first | second | third);
                    this.words[j] |= (int)((w << off) & 0x3ffffff);
                    if (j + 1 >= this.words.Length)
                    {
                        Array.Resize(ref this.words, j + 2);
                        this.Length = j + 2;
                    }
                    this.words[j + 1] = (int)((w >> (26 - off)) & 0x3ffffff);
                    off += 24;
                    if (off >= 26)
                    {
                        off -= 26;
                        j++;
                    }
                }
            }
            this._strip();
        }

        private byte parseHex4Bits(string @string, int index)
        {
            var c = @string.ElementAt(index);
            // '0' - '9'
            if (c >= 48 && c <= 57)
            {
                return (byte)(c - 48);
                // 'A' - 'F'
            }
            else if (c >= 65 && c <= 70)
            {
                return (byte)(c - 55);
                // 'a' - 'f'
            }
            else if (c >= 97 && c <= 102)
            {
                return (byte)(c - 87);
            }
            else
            {
                Functions.Assert(false, "Invalid character in " + @string);
                return 0;
            }
        }

        private byte parseHexByte(string @string, int lowerBound, int index)
        {
            var r = parseHex4Bits(@string, index);
            if (index - 1 >= lowerBound)
            {
                r |= (byte)(parseHex4Bits(@string, index - 1) << 4);
            }
            return r;
        }

        private void _parseHex(string number, int start, Endian endian)
        {
            // Create possibly bigger array to ensure that it fits the number
            this.Length = (int)Math.Ceiling((double)(number.Length - start) / 6);
            this.words = new int[this.Length];
            int i;
            for (i = 0; i < this.Length; i++)
            {
                this.words[i] = 0;
            }

            // 24-bits chunks
            var off = 0;
            var j = 0;

            uint w;
            if (endian == Endian.BigEndian)
            {
                for (i = number.Length - 1; i >= start; i -= 2)
                {
                    w = (uint)(parseHexByte(number, start, i) << off);
                    this.words[j] |= (int)(w & 0x3ffffff);
                    if (off >= 18)
                    {
                        off -= 18;
                        j += 1;
                        this.words[j] |= (int)(w >> 26);
                    }
                    else
                    {
                        off += 8;
                    }
                }
            }
            else
            {
                var parseLength = number.Length - start;
                for (i = parseLength % 2 == 0 ? start + 1 : start; i < number.Length; i += 2)
                {
                    w = (uint)(parseHexByte(number, start, i) << off);
                    this.words[j] |= (int)(w & 0x3ffffff);
                    if (off >= 18)
                    {
                        off -= 18;
                        j += 1;
                        this.words[j] |= (int)(w >> 26);
                    }
                    else
                    {
                        off += 8;
                    }
                }
            }

            this._strip();
        }

        private int parseBase(string str, int start, int end, int mul)
        {
            var r = 0;
            var b = 0;
            var len = Math.Min(str.Length, end);
            for (var i = start; i < len; i++)
            {
                var c = str.ElementAt(i) - 48;

                r *= mul;

                // 'a'
                if (c >= 49)
                {
                    b = c - 49 + 0xa;

                    // 'A'
                }
                else if (c >= 17)
                {
                    b = c - 17 + 0xa;

                    // '0' - '9'
                }
                else
                {
                    b = c;
                }
                Functions.Assert(c >= 0 && b < mul, "Invalid character");
                r += b;
            }
            return r;
        }

        private void _parseBase(string number, int @base, int start)
        {
            // Initialize as zero
            this.words = new int[] { 0 };
            this.Length = 1;

            int limbLen;
            long limbPow;
            // Find length of limb in base
            for (limbLen = 0, limbPow = 1; limbPow <= 0x3ffffff; limbPow *= @base)
            {
                limbLen++;
            }
            limbLen--;
            limbPow = (limbPow / @base) | 0;

            var total = number.Length - start;
            var mod = total % limbLen;
            var end = Math.Min(total, total - mod) + start;

            var word = 0;
            int i;
            for (i = start; i < end; i += limbLen)
            {
                word = parseBase(number, i, i + limbLen, @base);

                this.Imuln(limbPow);
                if (this.words[0] + word < 0x4000000)
                {
                    this.words[0] += word;
                }
                else
                {
                    this._iaddn(word);
                }
            }

            if (mod != 0)
            {
                var pow = 1;
                word = parseBase(number, i, number.Length, @base);

                for (i = 0; i < mod; i++)
                {
                    pow *= @base;
                }

                this.Imuln(pow);
                if (this.words[0] + word < 0x4000000)
                {
                    this.words[0] += word;
                }
                else
                {
                    this._iaddn(word);
                }
            }

            this._strip();
        }

        public void Copy(BN dest)
        {
            dest.words = new int[this.Length];
            for (var i = 0; i < this.Length; i++)
            {
                dest.words[i] = this.words[i];
            }
            dest.Length = this.Length;
            dest.Negative = this.Negative;
            dest.red = this.red;
        }

        internal static void move(BN dest, BN src)
        {
            dest.words = src.words;
            dest.Length = src.Length;
            dest.Negative = src.Negative;
            dest.red = src.red;
        }

        private void _move(BN dest)
        {
            move(dest, this);
        }

        /// <summary>
        /// Clone number
        /// </summary>
        /// <returns></returns>
        public BN Clone()
        {
            var r = new BN();
            this.Copy(r);
            return r;
        }

        private BN _expand(int size)
        {
            if (this.Length < size)
                Array.Resize(ref this.words, size);
            while (this.Length < size)
            {
                this.words[this.Length++] = 0;
            }
            return this;
        }

        internal BN _strip()
        {
            while (this.Length > 1 && this.words[this.Length - 1] == 0)
            {
                this.Length--;
            }
            Array.Resize(ref this.words, this.Length);
            return this._normSign();
        }

        private BN _normSign()
        {
            // -0 = 0
            if (this.Length == 1 && this.words[0] == 0)
            {
                this.Negative = 0;
            }
            return this;
        }

        public string Inspect()
        {
            return (this.red != null ? "<BN-R: " : "<BN: ") + this.ToString(16) + ">";
        }

        private readonly string[] zeros = new string[] {
            "",
            "0",
            "00",
            "000",
            "0000",
            "00000",
            "000000",
            "0000000",
            "00000000",
            "000000000",
            "0000000000",
            "00000000000",
            "000000000000",
            "0000000000000",
            "00000000000000",
            "000000000000000",
            "0000000000000000",
            "00000000000000000",
            "000000000000000000",
            "0000000000000000000",
            "00000000000000000000",
            "000000000000000000000",
            "0000000000000000000000",
            "00000000000000000000000",
            "000000000000000000000000",
            "0000000000000000000000000"
          };

        private readonly int[] groupSizes = new int[] {
          0, 0,
          25, 16, 12, 11, 10, 9, 8,
          8, 7, 7, 7, 7, 6, 6,
          6, 6, 6, 6, 6, 5, 5,
          5, 5, 5, 5, 5, 5, 5,
          5, 5, 5, 5, 5, 5, 5
        };

        private readonly int[] groupBases = new int[] {
          0, 0,
          33554432, 43046721, 16777216, 48828125, 60466176, 40353607, 16777216,
          43046721, 10000000, 19487171, 35831808, 62748517, 7529536, 11390625,
          16777216, 24137569, 34012224, 47045881, 64000000, 4084101, 5153632,
          6436343, 7962624, 9765625, 11881376, 14348907, 17210368, 20511149,
          24300000, 28629151, 33554432, 39135393, 45435424, 52521875, 60466176
        };

        /// <summary>
        /// Convert to base-string
        /// </summary>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public override string ToString()
        {
            return ToString(null);
        }

        /// <summary>
        /// Convert to base-string and pad with zeroes
        /// </summary>
        /// <param name="base"></param>
        /// <param name="padding"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public string ToString(string? @base, int? padding = null)
        {
            int baseInt = _baseStringToInt(@base);
            return ToString(baseInt, padding);
        }

        /// <summary>
        /// Convert to base-string and pad with zeroes
        /// </summary>
        /// <param name="base"></param>
        /// <param name="padding"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public string ToString(int @base, int? padding = null)
        {
            padding = padding ?? 1;

            string @out;
            if (@base == 16)
            {
                @out = "";
                var off = 0;
                int carry = 0;
                for (var i = 0; i < this.Length; i++)
                {
                    var w = this.words[i];
                    var word = (((w << off) | carry) & 0xffffff).ToString(16);
                    carry = (w >> (24 - off)) & 0xffffff;
                    off += 2;
                    if (off >= 26)
                    {
                        off -= 26;
                        i--;
                    }
                    if (carry != 0 || i != this.Length - 1)
                    {
                        @out = zeros[6 - word.Length] + word + @out;
                    }
                    else
                    {
                        @out = word + @out;
                    }
                }
                if (carry != 0)
                {
                    @out = carry.ToString(16) + @out;
                }
                while (@out.Length % padding != 0) {
                    @out = '0' + @out;
                }
                if (this.Negative != 0)
                {
                    @out = '-' + @out;
                }
                return @out;
            }

            if (@base == (@base | 0) && @base >= 2 && @base <= 36)
            {
                // var groupSize = Math.floor(BN.wordSize * Math.LN2 / Math.log(@base));
                var groupSize = groupSizes[@base];
                // var group@base = Math.pow(@base, groupSize);
                var groupbase = groupBases[@base];
                @out = "";
                var c = this.Clone();
                c.Negative = 0;
                while (!c.IsZero())
                {
                    var r = c.Modrn(groupbase).ToString(@base);
                    c = c.Idivn(groupbase);

                    if (!c.IsZero())
                    {
                        @out = zeros[groupSize - r.Length] + r + @out;
                    }
                    else
                    {
                        @out = r + @out;
                    }
                }
                if (this.IsZero())
                {
                    @out = '0' + @out;
                }
                while (@out.Length % padding != 0) {
                    @out = '0' + @out;
                }
                if (this.Negative != 0)
                {
                    @out = '-' + @out;
                }
                return @out;
            }

            Functions.Assert(false, "Base should be between 2 and 36");
            return "";
        }

        /// <summary>
        /// Convert to Number (limited to 53 bits)
        /// </summary>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public long ToNumber()
        {
            var ret = (long)this.words[0];
            if (this.Length == 2)
            {
                ret += (long)this.words[1] * 0x4000000;
            }
            else if (this.Length == 3 && this.words[2] == 0x01)
            {
                // NOTE: at this stage it is known that the top bit is set
                ret += 0x10000000000000 + ((long)this.words[1] * 0x4000000);
            }
            else if (this.Length > 2)
            {
                Functions.Assert(false, "Number can only safely store up to 53 bits");
            }
            return (this.Negative != 0) ? -ret : ret;
        }

        /// <summary>
        /// Convert to JSON compatible hex string (alias of ToString(16))
        /// </summary>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public string ToJSON()
        {
            return this.ToString(16, 2);
        }

        private byte[] allocate(long size)
        {
            var array = new byte[size];
            return array;
        }

        /// <summary>
        /// Convert to byte Array, and optionally zero pad to length, throwing if already exceeding
        /// </summary>
        /// <param name="endian"></param>
        /// <param name="length"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public byte[] ToArray(Endian endian = Endian.BigEndian, int? length = null)
        {
            this._strip();

            var byteLength = this.ByteLength();
            var reqLength = length ?? Math.Max(1, byteLength);

            Functions.Assert(byteLength <= reqLength, "byte array longer than desired length");
            Functions.Assert(reqLength > 0, "Requested array length <= 0");

            var res = allocate(reqLength);
            if (endian == Endian.LittleEndian)
            {
                _toArrayLikeLE(res, byteLength);
            }
            else
            {
                _toArrayLikeBE(res, byteLength);
            }
            return res;
        }

        private void _toArrayLikeLE(byte[] res, long byteLength)
        {
            var position = 0;
            long carry = 0;

            for (int i = 0, shift = 0; i < this.Length; i++)
            {
                var word = (this.words[i] << shift) | carry;

                res[position++] = (byte)(word & 0xff);
                if (position < res.Length)
                {
                    res[position++] = (byte)((word >> 8) & 0xff);
                }
                if (position < res.Length)
                {
                    res[position++] = (byte)((word >> 16) & 0xff);
                }

                if (shift == 6)
                {
                    if (position < res.Length)
                    {
                        res[position++] = (byte)((word >> 24) & 0xff);
                    }
                    carry = 0;
                    shift = 0;
                }
                else
                {
                    carry = word >> 24;
                    shift += 2;
                }
            }

            if (position < res.Length)
            {
                res[position++] = (byte)(carry);

                while (position < res.Length)
                {
                    res[position++] = 0;
                }
            }
        }

        private void _toArrayLikeBE(byte[] res, long byteLength)
        {
            var position = res.Length - 1;
            long carry = 0;

            for (int i = 0, shift = 0; i < this.Length; i++)
            {
                var word = (this.words[i] << shift) | carry;

                res[position--] = (byte)(word & 0xff);
                if (position >= 0)
                {
                    res[position--] = (byte)((word >> 8) & 0xff);
                }
                if (position >= 0)
                {
                    res[position--] = (byte)((word >> 16) & 0xff);
                }

                if (shift == 6)
                {
                    if (position >= 0)
                    {
                        res[position--] = (byte)((word >> 24) & 0xff);
                    }
                    carry = 0;
                    shift = 0;
                }
                else
                {
                    carry = word >> 24;
                    shift += 2;
                }
            }

            if (position >= 0)
            {
                res[position--] = (byte)(carry);

                while (position >= 0)
                {
                    res[position--] = 0;
                }
            }
        }

        internal static int _countBits(int w)
        {
            var t = w;
            var r = 0;
            if (t >= 0x1000)
            {
                r += 13;
                t >>= 13;
            }
            if (t >= 0x40)
            {
                r += 7;
                t >>= 7;
            }
            if (t >= 0x8)
            {
                r += 4;
                t >>= 4;
            }
            if (t >= 0x02)
            {
                r += 2;
                t >>= 2;
            }
            return r + t;
        }

        private long _zeroBits(int w)
        {
            // Short-cut
            if (w == 0) return 26;

            var t = w;
            var r = 0;
            if ((t & 0x1fff) == 0)
            {
                r += 13;
                t >>= 13;
            }
            if ((t & 0x7f) == 0)
            {
                r += 7;
                t >>= 7;
            }
            if ((t & 0xf) == 0)
            {
                r += 4;
                t >>= 4;
            }
            if ((t & 0x3) == 0)
            {
                r += 2;
                t >>= 2;
            }
            if ((t & 0x1) == 0)
            {
                r++;
            }
            return r;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <returns>Number of bits occupied</returns>
        public int BitLength()
        {
            var w = this.words[this.Length - 1];
            var hi = BN._countBits(w);
            return (this.Length - 1) * 26 + hi;
        }

        private byte[] toBitArray(BN num)
        {
            var w = new byte[num.BitLength()];

            for (var bit = 0; bit < w.Length; bit++)
            {
                var off = (bit / 26) | 0;
                var wbit = bit % 26;

                w[bit] = (byte)((num.words[off] >> wbit) & 0x01);
            }

            return w;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <returns>Number of less-significant consequent zero bits (example: 1010000 has 4 zero bits)</returns>
        public long ZeroBits()
        {
            if (this.IsZero()) return 0;

            long r = 0;
            for (var i = 0; i < this.Length; i++)
            {
                var b = this._zeroBits(this.words[i]);
                r += b;
                if (b != 26) break;
            }
            return r;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <returns>Number of bytes occupied</returns>
        public long ByteLength()
        {
            return (long)Math.Ceiling((double)this.BitLength() / 8);
        }

        /// <summary>
        /// Convert to two's complement representation
        /// </summary>
        /// <param name="width">Bit width</param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN ToTwos(int width)
        {
            if (this.Negative != 0)
            {
                return this.Abs().Inotn(width).Iaddn(1);
            }
            return this.Clone();
        }

        /// <summary>
        /// Convert from two's complement representation
        /// </summary>
        /// <param name="width">Bit width</param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN FromTwos(int width)
        {
            if (this.Testn(width - 1))
            {
                return this.Notn(width).Iaddn(1).Ineg();
            }
            return this.Clone();
        }

        /// <summary>
        /// 
        /// </summary>
        /// <returns>True if the number is negative</returns>
        public bool IsNeg()
        {
            return this.Negative != 0;
        }

        /// <summary>
        /// Negate sign
        /// </summary>
        /// <returns>Negative clone of `this`</returns>
        public BN Neg()
        {
            return this.Clone().Ineg();
        }

        /// <summary>
        /// Negate sign
        /// </summary>
        /// <returns></returns>
        public BN Ineg()
        {
            if (!this.IsZero())
            {
                this.Negative ^= 1;
            }

            return this;
        }

        /// <summary>
        /// Or `num` with `this` in-place
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        public BN Iuor(BN num)
        {
            if (this.Length < num.Length)
                Array.Resize(ref this.words, num.Length);
            while (this.Length < num.Length)
            {
                this.words[this.Length++] = 0;
            }

            for (var i = 0; i < num.Length; i++)
            {
                this.words[i] = this.words[i] | num.words[i];
            }

            return this._strip();
        }

        /// <summary>
        /// Or `num` with `this` in-place
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Ior(BN num)
        {
            Functions.Assert((this.Negative | num.Negative) == 0);
            return this.Iuor(num);
        }

        /// <summary>
        /// Or `num` with `this`
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Or(BN num)
        {
            if (this.Length > num.Length) return this.Clone().Ior(num);
            return num.Clone().Ior(this);
        }

        /// <summary>
        /// Or `num` with `this`
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        public BN Uor(BN num)
        {
            if (this.Length > num.Length) return this.Clone().Iuor(num);
            return num.Clone().Iuor(this);
        }

        /// <summary>
        /// And `num` with `this` in-place
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        public BN Iuand(BN num)
        {
            // b = min-length(num, this)
            BN b;
            if (this.Length > num.Length)
            {
                b = num;
            }
            else
            {
                b = this;
            }

            for (var i = 0; i < b.Length; i++)
            {
                this.words[i] = this.words[i] & num.words[i];
            }

            this.Length = b.Length;

            return this._strip();
        }

        /// <summary>
        /// And `num` with `this` in-place
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Iand(BN num)
        {
            Functions.Assert((this.Negative | num.Negative) == 0);
            return this.Iuand(num);
        }

        /// <summary>
        /// And `num` with `this`
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN And(BN num)
        {
            if (this.Length > num.Length) return this.Clone().Iand(num);
            return num.Clone().Iand(this);
        }

        /// <summary>
        /// And `num` with `this`
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        public BN Uand(BN num)
        {
            if (this.Length > num.Length) return this.Clone().Iuand(num);
            return num.Clone().Iuand(this);
        }

        /// <summary>
        /// Xor `num` with `this` in-place
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        public BN Iuxor(BN num)
        {
            // a.length > b.length
            BN a;
            BN b;
            if (this.Length > num.Length)
            {
                a = this;
                b = num;
            }
            else
            {
                a = num;
                b = this;
            }

            int i;
            for (i = 0; i < b.Length; i++)
            {
                this.words[i] = a.words[i] ^ b.words[i];
            }

            if (this != a)
            {
                Array.Resize(ref this.words, a.Length);
                for (; i < a.Length; i++)
                {
                    this.words[i] = a.words[i];
                }
            }

            this.Length = a.Length;

            return this._strip();
        }

        /// <summary>
        /// Xor `num` with `this` in-place
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Ixor(BN num)
        {
            Functions.Assert((this.Negative | num.Negative) == 0);
            return this.Iuxor(num);
        }

        /// <summary>
        /// Xor `num` with `this`
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Xor(BN num)
        {
            if (this.Length > num.Length) return this.Clone().Ixor(num);
            return num.Clone().Ixor(this);
        }

        /// <summary>
        /// Xor `num` with `this`
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        public BN Uxor(BN num)
        {
            if (this.Length > num.Length) return this.Clone().Iuxor(num);
            return num.Clone().Iuxor(this);
        }

        /// <summary>
        /// Not `this` with `width` bitwidth
        /// </summary>
        /// <param name="width"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Inotn(int width)
        {
            Functions.Assert(width >= 0);

            var bytesNeeded = (int)Math.Ceiling((double)width / 26) | 0;
            var bitsLeft = width % 26;

            // Extend the buffer with leading zeroes
            this._expand(bytesNeeded);

            if (bitsLeft > 0)
            {
                bytesNeeded--;
            }

            // Handle complete words
            int i;
            for (i = 0; i < bytesNeeded; i++)
            {
                this.words[i] = ~this.words[i] & 0x3ffffff;
            }

            // Handle the residue
            if (bitsLeft > 0)
            {
                this.words[i] = ~this.words[i] & (0x3ffffff >> (26 - bitsLeft));
            }

            // And remove leading zeroes
            return this._strip();
        }

        /// <summary>
        /// Not `this` with `width` bitwidth
        /// </summary>
        /// <param name="width"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Notn(int width)
        {
            return this.Clone().Inotn(width);
        }

        /// <summary>
        /// Set `bit` of `this`
        /// </summary>
        /// <param name="bit"></param>
        /// <param name="val"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Setn(int bit, byte? val)
        {
            Functions.Assert(bit >= 0);

            var off = (bit / 26) | 0;
            var wbit = bit % 26;

            this._expand(off + 1);

            if (val != null && val != 0)
            {
                this.words[off] = this.words[off] | (1 << wbit);
            }
            else
            {
                this.words[off] = this.words[off] & ~(1 << wbit);
            }

            return this._strip();
        }

        /// <summary>
        /// Add `num` to `this` in-place
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        public BN Iadd(BN num)
        {
            BN r0;

            // negative + positive
            if (this.Negative != 0 && num.Negative == 0)
            {
                this.Negative = 0;
                r0 = this.Isub(num);
                this.Negative ^= 1;
                return this._normSign();

                // positive + negative
            }
            else if (this.Negative == 0 && num.Negative != 0)
            {
                num.Negative = 0;
                r0 = this.Isub(num);
                num.Negative = 1;
                return r0._normSign();
            }

            // a.length > b.length
            BN a, b;
            if (this.Length > num.Length)
            {
                a = this;
                b = num;
            }
            else
            {
                a = num;
                b = this;
            }

            int carry = 0;
            int i;
            int r;
            for (i = 0; i < b.Length; i++)
            {
                r = (a.words[i] | 0) + (b.words[i] | 0) + carry;
                this.words[i] = r & 0x3ffffff;
                carry = r >> 26;
            }
            Array.Resize(ref this.words, a.Length);
            for (; carry != 0 && i < a.Length; i++)
            {
                r = (a.words[i] | 0) + carry;
                this.words[i] = r & 0x3ffffff;
                carry = r >> 26;
            }

            this.Length = a.Length;
            if (carry != 0)
            {
                Array.Resize(ref this.words, this.Length + 1);
                this.words[this.Length] = carry;
                this.Length++;
                // Copy the rest of the words
            }
            else if (a != this)
            {
                for (; i < a.Length; i++)
                {
                    this.words[i] = a.words[i];
                }
            }

            return this;
        }

        /// <summary>
        /// Add `num` to `this`
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        public BN Add(BN num)
        {
            BN res;
            if (num.Negative != 0 && this.Negative == 0)
            {
                num.Negative = 0;
                res = this.Sub(num);
                num.Negative ^= 1;
                return res;
            }
            else if (num.Negative == 0 && this.Negative != 0)
            {
                this.Negative = 0;
                res = num.Sub(this);
                this.Negative = 1;
                return res;
            }

            if (this.Length > num.Length) return this.Clone().Iadd(num);

            return num.Clone().Iadd(this);
        }

        /// <summary>
        /// Subtract `num` from `this` in-place
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        public BN Isub(BN num)
        {
            // this - (-num) = this + num
            if (num.Negative != 0)
            {
                num.Negative = 0;
                var r0 = this.Iadd(num);
                num.Negative = 1;
                return r0._normSign();

                // -this - num = -(this + num)
            }
            else if (this.Negative != 0)
            {
                this.Negative = 0;
                this.Iadd(num);
                this.Negative = 1;
                return this._normSign();
            }

            // At this point both numbers are positive
            var cmp = this.Cmp(num);

            // Optimization - zeroify
            if (cmp == 0)
            {
                this.Negative = 0;
                this.Length = 1;
                this.words[0] = 0;
                return this;
            }

            // a > b
            BN a, b;
            if (cmp > 0)
            {
                a = this;
                b = num;
            }
            else
            {
                a = num;
                b = this;
            }

            int carry = 0;
            int r;
            int i;
            for (i = 0; i < b.Length; i++)
            {
                r = (a.words[i] | 0) - (b.words[i] | 0) + carry;
                carry = r >> 26;
                this.words[i] = r & 0x3ffffff;
            }
            Array.Resize(ref this.words, a.Length);
            for (; carry != 0 && i < a.Length; i++)
            {
                r = (a.words[i] | 0) + carry;
                carry = r >> 26;
                this.words[i] = r & 0x3ffffff;
            }

            // Copy rest of the words
            if (carry == 0 && i < a.Length && a != this)
            {
                for (; i < a.Length; i++)
                {
                    this.words[i] = a.words[i];
                }
            }

            this.Length = Math.Max(this.Length, i);

            if (a != this)
            {
                this.Negative = 1;
            }

            return this._strip();
        }

        /// <summary>
        /// Subtract `num` from `this`
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        public BN Sub(BN num)
        {
            return this.Clone().Isub(num);
        }

        private BN smallMulTo(BN self, BN num, BN @out)
        {
            @out.Negative = num.Negative ^ self.Negative;
            var len = (self.Length + num.Length) | 0;
            @out.Length = len;
            Array.Resize(ref @out.words, @out.Length);
            len = (len - 1) | 0;

            // Peel one iteration (compiler can't do it, because of code complexity)
            long a = self.words[0] | 0;
            long b = num.words[0] | 0;
            long r = a * b;

            var lo = (int)(r & 0x3ffffff);
            var carry = (r / 0x4000000) | 0;
            @out.words[0] = lo;

            int k;
            for (k = 1; k < len; k++)
            {
                // Sum all words with the same `i + j = k` and accumulate `ncarry`,
                // note that ncarry could be >= 0x3ffffff
                var ncarry = carry >> 26;
                var rword = carry & 0x3ffffff;
                var maxJ = Math.Min(k, num.Length - 1);
                for (var j = Math.Max(0, k - self.Length + 1); j <= maxJ; j++)
                {
                    var i = (k - j) | 0;
                    a = self.words[i] | 0;
                    b = num.words[j] | 0;
                    r = a * b + rword;
                    ncarry += (r / 0x4000000) | 0;
                    rword = r & 0x3ffffff;
                }
                @out.words[k] = (int)(rword | 0);
                carry = ncarry | 0;
            }
            if (carry != 0)
            {
                @out.Length++;
                Array.Resize(ref @out.words, @out.Length);
                
                @out.words[k] = (int)(carry | 0);
            }
            else
            {
                //?
                @out.Length--;
            }

            return @out._strip();
        }

        // TODO(indutny): it may be reasonable to omit it for users who don't need
        // to work with 256-bit numbers, otherwise it gives 20% improvement for 256-bit
        // multiplication (like elliptic secp256k1).
        private BN comb10MulTo(BN self, BN num, BN @out)
        {
            var a = self.words;
            var b = num.words;
            var o = @out.words;
            var c = 0;
            int lo;
            int mid;
            int hi;
            var a0 = a[0] | 0;
            var al0 = a0 & 0x1fff;
            var ah0 = a0 >> 13;
            var a1 = a[1] | 0;
            var al1 = a1 & 0x1fff;
            var ah1 = a1 >> 13;
            var a2 = a[2] | 0;
            var al2 = a2 & 0x1fff;
            var ah2 = a2 >> 13;
            var a3 = a[3] | 0;
            var al3 = a3 & 0x1fff;
            var ah3 = a3 >> 13;
            var a4 = a[4] | 0;
            var al4 = a4 & 0x1fff;
            var ah4 = a4 >> 13;
            var a5 = a[5] | 0;
            var al5 = a5 & 0x1fff;
            var ah5 = a5 >> 13;
            var a6 = a[6] | 0;
            var al6 = a6 & 0x1fff;
            var ah6 = a6 >> 13;
            var a7 = a[7] | 0;
            var al7 = a7 & 0x1fff;
            var ah7 = a7 >> 13;
            var a8 = a[8] | 0;
            var al8 = a8 & 0x1fff;
            var ah8 = a8 >> 13;
            var a9 = a[9] | 0;
            var al9 = a9 & 0x1fff;
            var ah9 = a9 >> 13;
            var b0 = b[0] | 0;
            var bl0 = b0 & 0x1fff;
            var bh0 = b0 >> 13;
            var b1 = b[1] | 0;
            var bl1 = b1 & 0x1fff;
            var bh1 = b1 >> 13;
            var b2 = b[2] | 0;
            var bl2 = b2 & 0x1fff;
            var bh2 = b2 >> 13;
            var b3 = b[3] | 0;
            var bl3 = b3 & 0x1fff;
            var bh3 = b3 >> 13;
            var b4 = b[4] | 0;
            var bl4 = b4 & 0x1fff;
            var bh4 = b4 >> 13;
            var b5 = b[5] | 0;
            var bl5 = b5 & 0x1fff;
            var bh5 = b5 >> 13;
            var b6 = b[6] | 0;
            var bl6 = b6 & 0x1fff;
            var bh6 = b6 >> 13;
            var b7 = b[7] | 0;
            var bl7 = b7 & 0x1fff;
            var bh7 = b7 >> 13;
            var b8 = b[8] | 0;
            var bl8 = b8 & 0x1fff;
            var bh8 = b8 >> 13;
            var b9 = b[9] | 0;
            var bl9 = b9 & 0x1fff;
            var bh9 = b9 >> 13;

            @out.Negative = self.Negative ^ num.Negative;
            @out.Length = 19;
            /* k = 0 */
            lo = (al0 * bl0);
            mid = (al0 * bh0);
            mid = (mid + (ah0 * bl0)) | 0;
            hi = (ah0 * bh0);
            var w0 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w0 >> 26)) | 0;
            w0 &= 0x3ffffff;
            /* k = 1 */
            lo = (al1 * bl0);
            mid = (al1 * bh0);
            mid = (mid + (ah1 * bl0)) | 0;
            hi = (ah1 * bh0);
            lo = (lo + (al0 * bl1)) | 0;
            mid = (mid + (al0 * bh1)) | 0;
            mid = (mid + (ah0 * bl1)) | 0;
            hi = (hi + (ah0 * bh1)) | 0;
            var w1 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w1 >> 26)) | 0;
            w1 &= 0x3ffffff;
            /* k = 2 */
            lo = (al2 * bl0);
            mid = (al2 * bh0);
            mid = (mid + (ah2 * bl0)) | 0;
            hi = (ah2 * bh0);
            lo = (lo + (al1 * bl1)) | 0;
            mid = (mid + (al1 * bh1)) | 0;
            mid = (mid + (ah1 * bl1)) | 0;
            hi = (hi + (ah1 * bh1)) | 0;
            lo = (lo + (al0 * bl2)) | 0;
            mid = (mid + (al0 * bh2)) | 0;
            mid = (mid + (ah0 * bl2)) | 0;
            hi = (hi + (ah0 * bh2)) | 0;
            var w2 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w2 >> 26)) | 0;
            w2 &= 0x3ffffff;
            /* k = 3 */
            lo = (al3 * bl0);
            mid = (al3 * bh0);
            mid = (mid + (ah3 * bl0)) | 0;
            hi = (ah3 * bh0);
            lo = (lo + (al2 * bl1)) | 0;
            mid = (mid + (al2 * bh1)) | 0;
            mid = (mid + (ah2 * bl1)) | 0;
            hi = (hi + (ah2 * bh1)) | 0;
            lo = (lo + (al1 * bl2)) | 0;
            mid = (mid + (al1 * bh2)) | 0;
            mid = (mid + (ah1 * bl2)) | 0;
            hi = (hi + (ah1 * bh2)) | 0;
            lo = (lo + (al0 * bl3)) | 0;
            mid = (mid + (al0 * bh3)) | 0;
            mid = (mid + (ah0 * bl3)) | 0;
            hi = (hi + (ah0 * bh3)) | 0;
            var w3 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w3 >> 26)) | 0;
            w3 &= 0x3ffffff;
            /* k = 4 */
            lo = (al4 * bl0);
            mid = (al4 * bh0);
            mid = (mid + (ah4 * bl0)) | 0;
            hi = (ah4 * bh0);
            lo = (lo + (al3 * bl1)) | 0;
            mid = (mid + (al3 * bh1)) | 0;
            mid = (mid + (ah3 * bl1)) | 0;
            hi = (hi + (ah3 * bh1)) | 0;
            lo = (lo + (al2 * bl2)) | 0;
            mid = (mid + (al2 * bh2)) | 0;
            mid = (mid + (ah2 * bl2)) | 0;
            hi = (hi + (ah2 * bh2)) | 0;
            lo = (lo + (al1 * bl3)) | 0;
            mid = (mid + (al1 * bh3)) | 0;
            mid = (mid + (ah1 * bl3)) | 0;
            hi = (hi + (ah1 * bh3)) | 0;
            lo = (lo + (al0 * bl4)) | 0;
            mid = (mid + (al0 * bh4)) | 0;
            mid = (mid + (ah0 * bl4)) | 0;
            hi = (hi + (ah0 * bh4)) | 0;
            var w4 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w4 >> 26)) | 0;
            w4 &= 0x3ffffff;
            /* k = 5 */
            lo = (al5 * bl0);
            mid = (al5 * bh0);
            mid = (mid + (ah5 * bl0)) | 0;
            hi = (ah5 * bh0);
            lo = (lo + (al4 * bl1)) | 0;
            mid = (mid + (al4 * bh1)) | 0;
            mid = (mid + (ah4 * bl1)) | 0;
            hi = (hi + (ah4 * bh1)) | 0;
            lo = (lo + (al3 * bl2)) | 0;
            mid = (mid + (al3 * bh2)) | 0;
            mid = (mid + (ah3 * bl2)) | 0;
            hi = (hi + (ah3 * bh2)) | 0;
            lo = (lo + (al2 * bl3)) | 0;
            mid = (mid + (al2 * bh3)) | 0;
            mid = (mid + (ah2 * bl3)) | 0;
            hi = (hi + (ah2 * bh3)) | 0;
            lo = (lo + (al1 * bl4)) | 0;
            mid = (mid + (al1 * bh4)) | 0;
            mid = (mid + (ah1 * bl4)) | 0;
            hi = (hi + (ah1 * bh4)) | 0;
            lo = (lo + (al0 * bl5)) | 0;
            mid = (mid + (al0 * bh5)) | 0;
            mid = (mid + (ah0 * bl5)) | 0;
            hi = (hi + (ah0 * bh5)) | 0;
            var w5 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w5 >> 26)) | 0;
            w5 &= 0x3ffffff;
            /* k = 6 */
            lo = (al6 * bl0);
            mid = (al6 * bh0);
            mid = (mid + (ah6 * bl0)) | 0;
            hi = (ah6 * bh0);
            lo = (lo + (al5 * bl1)) | 0;
            mid = (mid + (al5 * bh1)) | 0;
            mid = (mid + (ah5 * bl1)) | 0;
            hi = (hi + (ah5 * bh1)) | 0;
            lo = (lo + (al4 * bl2)) | 0;
            mid = (mid + (al4 * bh2)) | 0;
            mid = (mid + (ah4 * bl2)) | 0;
            hi = (hi + (ah4 * bh2)) | 0;
            lo = (lo + (al3 * bl3)) | 0;
            mid = (mid + (al3 * bh3)) | 0;
            mid = (mid + (ah3 * bl3)) | 0;
            hi = (hi + (ah3 * bh3)) | 0;
            lo = (lo + (al2 * bl4)) | 0;
            mid = (mid + (al2 * bh4)) | 0;
            mid = (mid + (ah2 * bl4)) | 0;
            hi = (hi + (ah2 * bh4)) | 0;
            lo = (lo + (al1 * bl5)) | 0;
            mid = (mid + (al1 * bh5)) | 0;
            mid = (mid + (ah1 * bl5)) | 0;
            hi = (hi + (ah1 * bh5)) | 0;
            lo = (lo + (al0 * bl6)) | 0;
            mid = (mid + (al0 * bh6)) | 0;
            mid = (mid + (ah0 * bl6)) | 0;
            hi = (hi + (ah0 * bh6)) | 0;
            var w6 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w6 >> 26)) | 0;
            w6 &= 0x3ffffff;
            /* k = 7 */
            lo = (al7 * bl0);
            mid = (al7 * bh0);
            mid = (mid + (ah7 * bl0)) | 0;
            hi = (ah7 * bh0);
            lo = (lo + (al6 * bl1)) | 0;
            mid = (mid + (al6 * bh1)) | 0;
            mid = (mid + (ah6 * bl1)) | 0;
            hi = (hi + (ah6 * bh1)) | 0;
            lo = (lo + (al5 * bl2)) | 0;
            mid = (mid + (al5 * bh2)) | 0;
            mid = (mid + (ah5 * bl2)) | 0;
            hi = (hi + (ah5 * bh2)) | 0;
            lo = (lo + (al4 * bl3)) | 0;
            mid = (mid + (al4 * bh3)) | 0;
            mid = (mid + (ah4 * bl3)) | 0;
            hi = (hi + (ah4 * bh3)) | 0;
            lo = (lo + (al3 * bl4)) | 0;
            mid = (mid + (al3 * bh4)) | 0;
            mid = (mid + (ah3 * bl4)) | 0;
            hi = (hi + (ah3 * bh4)) | 0;
            lo = (lo + (al2 * bl5)) | 0;
            mid = (mid + (al2 * bh5)) | 0;
            mid = (mid + (ah2 * bl5)) | 0;
            hi = (hi + (ah2 * bh5)) | 0;
            lo = (lo + (al1 * bl6)) | 0;
            mid = (mid + (al1 * bh6)) | 0;
            mid = (mid + (ah1 * bl6)) | 0;
            hi = (hi + (ah1 * bh6)) | 0;
            lo = (lo + (al0 * bl7)) | 0;
            mid = (mid + (al0 * bh7)) | 0;
            mid = (mid + (ah0 * bl7)) | 0;
            hi = (hi + (ah0 * bh7)) | 0;
            var w7 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w7 >> 26)) | 0;
            w7 &= 0x3ffffff;
            /* k = 8 */
            lo = (al8 * bl0);
            mid = (al8 * bh0);
            mid = (mid + (ah8 * bl0)) | 0;
            hi = (ah8 * bh0);
            lo = (lo + (al7 * bl1)) | 0;
            mid = (mid + (al7 * bh1)) | 0;
            mid = (mid + (ah7 * bl1)) | 0;
            hi = (hi + (ah7 * bh1)) | 0;
            lo = (lo + (al6 * bl2)) | 0;
            mid = (mid + (al6 * bh2)) | 0;
            mid = (mid + (ah6 * bl2)) | 0;
            hi = (hi + (ah6 * bh2)) | 0;
            lo = (lo + (al5 * bl3)) | 0;
            mid = (mid + (al5 * bh3)) | 0;
            mid = (mid + (ah5 * bl3)) | 0;
            hi = (hi + (ah5 * bh3)) | 0;
            lo = (lo + (al4 * bl4)) | 0;
            mid = (mid + (al4 * bh4)) | 0;
            mid = (mid + (ah4 * bl4)) | 0;
            hi = (hi + (ah4 * bh4)) | 0;
            lo = (lo + (al3 * bl5)) | 0;
            mid = (mid + (al3 * bh5)) | 0;
            mid = (mid + (ah3 * bl5)) | 0;
            hi = (hi + (ah3 * bh5)) | 0;
            lo = (lo + (al2 * bl6)) | 0;
            mid = (mid + (al2 * bh6)) | 0;
            mid = (mid + (ah2 * bl6)) | 0;
            hi = (hi + (ah2 * bh6)) | 0;
            lo = (lo + (al1 * bl7)) | 0;
            mid = (mid + (al1 * bh7)) | 0;
            mid = (mid + (ah1 * bl7)) | 0;
            hi = (hi + (ah1 * bh7)) | 0;
            lo = (lo + (al0 * bl8)) | 0;
            mid = (mid + (al0 * bh8)) | 0;
            mid = (mid + (ah0 * bl8)) | 0;
            hi = (hi + (ah0 * bh8)) | 0;
            var w8 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w8 >> 26)) | 0;
            w8 &= 0x3ffffff;
            /* k = 9 */
            lo = (al9 * bl0);
            mid = (al9 * bh0);
            mid = (mid + (ah9 * bl0)) | 0;
            hi = (ah9 * bh0);
            lo = (lo + (al8 * bl1)) | 0;
            mid = (mid + (al8 * bh1)) | 0;
            mid = (mid + (ah8 * bl1)) | 0;
            hi = (hi + (ah8 * bh1)) | 0;
            lo = (lo + (al7 * bl2)) | 0;
            mid = (mid + (al7 * bh2)) | 0;
            mid = (mid + (ah7 * bl2)) | 0;
            hi = (hi + (ah7 * bh2)) | 0;
            lo = (lo + (al6 * bl3)) | 0;
            mid = (mid + (al6 * bh3)) | 0;
            mid = (mid + (ah6 * bl3)) | 0;
            hi = (hi + (ah6 * bh3)) | 0;
            lo = (lo + (al5 * bl4)) | 0;
            mid = (mid + (al5 * bh4)) | 0;
            mid = (mid + (ah5 * bl4)) | 0;
            hi = (hi + (ah5 * bh4)) | 0;
            lo = (lo + (al4 * bl5)) | 0;
            mid = (mid + (al4 * bh5)) | 0;
            mid = (mid + (ah4 * bl5)) | 0;
            hi = (hi + (ah4 * bh5)) | 0;
            lo = (lo + (al3 * bl6)) | 0;
            mid = (mid + (al3 * bh6)) | 0;
            mid = (mid + (ah3 * bl6)) | 0;
            hi = (hi + (ah3 * bh6)) | 0;
            lo = (lo + (al2 * bl7)) | 0;
            mid = (mid + (al2 * bh7)) | 0;
            mid = (mid + (ah2 * bl7)) | 0;
            hi = (hi + (ah2 * bh7)) | 0;
            lo = (lo + (al1 * bl8)) | 0;
            mid = (mid + (al1 * bh8)) | 0;
            mid = (mid + (ah1 * bl8)) | 0;
            hi = (hi + (ah1 * bh8)) | 0;
            lo = (lo + (al0 * bl9)) | 0;
            mid = (mid + (al0 * bh9)) | 0;
            mid = (mid + (ah0 * bl9)) | 0;
            hi = (hi + (ah0 * bh9)) | 0;
            var w9 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w9 >> 26)) | 0;
            w9 &= 0x3ffffff;
            /* k = 10 */
            lo = (al9 * bl1);
            mid = (al9 * bh1);
            mid = (mid + (ah9 * bl1)) | 0;
            hi = (ah9 * bh1);
            lo = (lo + (al8 * bl2)) | 0;
            mid = (mid + (al8 * bh2)) | 0;
            mid = (mid + (ah8 * bl2)) | 0;
            hi = (hi + (ah8 * bh2)) | 0;
            lo = (lo + (al7 * bl3)) | 0;
            mid = (mid + (al7 * bh3)) | 0;
            mid = (mid + (ah7 * bl3)) | 0;
            hi = (hi + (ah7 * bh3)) | 0;
            lo = (lo + (al6 * bl4)) | 0;
            mid = (mid + (al6 * bh4)) | 0;
            mid = (mid + (ah6 * bl4)) | 0;
            hi = (hi + (ah6 * bh4)) | 0;
            lo = (lo + (al5 * bl5)) | 0;
            mid = (mid + (al5 * bh5)) | 0;
            mid = (mid + (ah5 * bl5)) | 0;
            hi = (hi + (ah5 * bh5)) | 0;
            lo = (lo + (al4 * bl6)) | 0;
            mid = (mid + (al4 * bh6)) | 0;
            mid = (mid + (ah4 * bl6)) | 0;
            hi = (hi + (ah4 * bh6)) | 0;
            lo = (lo + (al3 * bl7)) | 0;
            mid = (mid + (al3 * bh7)) | 0;
            mid = (mid + (ah3 * bl7)) | 0;
            hi = (hi + (ah3 * bh7)) | 0;
            lo = (lo + (al2 * bl8)) | 0;
            mid = (mid + (al2 * bh8)) | 0;
            mid = (mid + (ah2 * bl8)) | 0;
            hi = (hi + (ah2 * bh8)) | 0;
            lo = (lo + (al1 * bl9)) | 0;
            mid = (mid + (al1 * bh9)) | 0;
            mid = (mid + (ah1 * bl9)) | 0;
            hi = (hi + (ah1 * bh9)) | 0;
            var w10 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w10 >> 26)) | 0;
            w10 &= 0x3ffffff;
            /* k = 11 */
            lo = (al9 * bl2);
            mid = (al9 * bh2);
            mid = (mid + (ah9 * bl2)) | 0;
            hi = (ah9 * bh2);
            lo = (lo + (al8 * bl3)) | 0;
            mid = (mid + (al8 * bh3)) | 0;
            mid = (mid + (ah8 * bl3)) | 0;
            hi = (hi + (ah8 * bh3)) | 0;
            lo = (lo + (al7 * bl4)) | 0;
            mid = (mid + (al7 * bh4)) | 0;
            mid = (mid + (ah7 * bl4)) | 0;
            hi = (hi + (ah7 * bh4)) | 0;
            lo = (lo + (al6 * bl5)) | 0;
            mid = (mid + (al6 * bh5)) | 0;
            mid = (mid + (ah6 * bl5)) | 0;
            hi = (hi + (ah6 * bh5)) | 0;
            lo = (lo + (al5 * bl6)) | 0;
            mid = (mid + (al5 * bh6)) | 0;
            mid = (mid + (ah5 * bl6)) | 0;
            hi = (hi + (ah5 * bh6)) | 0;
            lo = (lo + (al4 * bl7)) | 0;
            mid = (mid + (al4 * bh7)) | 0;
            mid = (mid + (ah4 * bl7)) | 0;
            hi = (hi + (ah4 * bh7)) | 0;
            lo = (lo + (al3 * bl8)) | 0;
            mid = (mid + (al3 * bh8)) | 0;
            mid = (mid + (ah3 * bl8)) | 0;
            hi = (hi + (ah3 * bh8)) | 0;
            lo = (lo + (al2 * bl9)) | 0;
            mid = (mid + (al2 * bh9)) | 0;
            mid = (mid + (ah2 * bl9)) | 0;
            hi = (hi + (ah2 * bh9)) | 0;
            var w11 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w11 >> 26)) | 0;
            w11 &= 0x3ffffff;
            /* k = 12 */
            lo = (al9 * bl3);
            mid = (al9 * bh3);
            mid = (mid + (ah9 * bl3)) | 0;
            hi = (ah9 * bh3);
            lo = (lo + (al8 * bl4)) | 0;
            mid = (mid + (al8 * bh4)) | 0;
            mid = (mid + (ah8 * bl4)) | 0;
            hi = (hi + (ah8 * bh4)) | 0;
            lo = (lo + (al7 * bl5)) | 0;
            mid = (mid + (al7 * bh5)) | 0;
            mid = (mid + (ah7 * bl5)) | 0;
            hi = (hi + (ah7 * bh5)) | 0;
            lo = (lo + (al6 * bl6)) | 0;
            mid = (mid + (al6 * bh6)) | 0;
            mid = (mid + (ah6 * bl6)) | 0;
            hi = (hi + (ah6 * bh6)) | 0;
            lo = (lo + (al5 * bl7)) | 0;
            mid = (mid + (al5 * bh7)) | 0;
            mid = (mid + (ah5 * bl7)) | 0;
            hi = (hi + (ah5 * bh7)) | 0;
            lo = (lo + (al4 * bl8)) | 0;
            mid = (mid + (al4 * bh8)) | 0;
            mid = (mid + (ah4 * bl8)) | 0;
            hi = (hi + (ah4 * bh8)) | 0;
            lo = (lo + (al3 * bl9)) | 0;
            mid = (mid + (al3 * bh9)) | 0;
            mid = (mid + (ah3 * bl9)) | 0;
            hi = (hi + (ah3 * bh9)) | 0;
            var w12 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w12 >> 26)) | 0;
            w12 &= 0x3ffffff;
            /* k = 13 */
            lo = (al9 * bl4);
            mid = (al9 * bh4);
            mid = (mid + (ah9 * bl4)) | 0;
            hi = (ah9 * bh4);
            lo = (lo + (al8 * bl5)) | 0;
            mid = (mid + (al8 * bh5)) | 0;
            mid = (mid + (ah8 * bl5)) | 0;
            hi = (hi + (ah8 * bh5)) | 0;
            lo = (lo + (al7 * bl6)) | 0;
            mid = (mid + (al7 * bh6)) | 0;
            mid = (mid + (ah7 * bl6)) | 0;
            hi = (hi + (ah7 * bh6)) | 0;
            lo = (lo + (al6 * bl7)) | 0;
            mid = (mid + (al6 * bh7)) | 0;
            mid = (mid + (ah6 * bl7)) | 0;
            hi = (hi + (ah6 * bh7)) | 0;
            lo = (lo + (al5 * bl8)) | 0;
            mid = (mid + (al5 * bh8)) | 0;
            mid = (mid + (ah5 * bl8)) | 0;
            hi = (hi + (ah5 * bh8)) | 0;
            lo = (lo + (al4 * bl9)) | 0;
            mid = (mid + (al4 * bh9)) | 0;
            mid = (mid + (ah4 * bl9)) | 0;
            hi = (hi + (ah4 * bh9)) | 0;
            var w13 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w13 >> 26)) | 0;
            w13 &= 0x3ffffff;
            /* k = 14 */
            lo = (al9 * bl5);
            mid = (al9 * bh5);
            mid = (mid + (ah9 * bl5)) | 0;
            hi = (ah9 * bh5);
            lo = (lo + (al8 * bl6)) | 0;
            mid = (mid + (al8 * bh6)) | 0;
            mid = (mid + (ah8 * bl6)) | 0;
            hi = (hi + (ah8 * bh6)) | 0;
            lo = (lo + (al7 * bl7)) | 0;
            mid = (mid + (al7 * bh7)) | 0;
            mid = (mid + (ah7 * bl7)) | 0;
            hi = (hi + (ah7 * bh7)) | 0;
            lo = (lo + (al6 * bl8)) | 0;
            mid = (mid + (al6 * bh8)) | 0;
            mid = (mid + (ah6 * bl8)) | 0;
            hi = (hi + (ah6 * bh8)) | 0;
            lo = (lo + (al5 * bl9)) | 0;
            mid = (mid + (al5 * bh9)) | 0;
            mid = (mid + (ah5 * bl9)) | 0;
            hi = (hi + (ah5 * bh9)) | 0;
            var w14 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w14 >> 26)) | 0;
            w14 &= 0x3ffffff;
            /* k = 15 */
            lo = (al9 * bl6);
            mid = (al9 * bh6);
            mid = (mid + (ah9 * bl6)) | 0;
            hi = (ah9 * bh6);
            lo = (lo + (al8 * bl7)) | 0;
            mid = (mid + (al8 * bh7)) | 0;
            mid = (mid + (ah8 * bl7)) | 0;
            hi = (hi + (ah8 * bh7)) | 0;
            lo = (lo + (al7 * bl8)) | 0;
            mid = (mid + (al7 * bh8)) | 0;
            mid = (mid + (ah7 * bl8)) | 0;
            hi = (hi + (ah7 * bh8)) | 0;
            lo = (lo + (al6 * bl9)) | 0;
            mid = (mid + (al6 * bh9)) | 0;
            mid = (mid + (ah6 * bl9)) | 0;
            hi = (hi + (ah6 * bh9)) | 0;
            var w15 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w15 >> 26)) | 0;
            w15 &= 0x3ffffff;
            /* k = 16 */
            lo = (al9 * bl7);
            mid = (al9 * bh7);
            mid = (mid + (ah9 * bl7)) | 0;
            hi = (ah9 * bh7);
            lo = (lo + (al8 * bl8)) | 0;
            mid = (mid + (al8 * bh8)) | 0;
            mid = (mid + (ah8 * bl8)) | 0;
            hi = (hi + (ah8 * bh8)) | 0;
            lo = (lo + (al7 * bl9)) | 0;
            mid = (mid + (al7 * bh9)) | 0;
            mid = (mid + (ah7 * bl9)) | 0;
            hi = (hi + (ah7 * bh9)) | 0;
            var w16 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w16 >> 26)) | 0;
            w16 &= 0x3ffffff;
            /* k = 17 */
            lo = (al9 * bl8);
            mid = (al9 * bh8);
            mid = (mid + (ah9 * bl8)) | 0;
            hi = (ah9 * bh8);
            lo = (lo + (al8 * bl9)) | 0;
            mid = (mid + (al8 * bh9)) | 0;
            mid = (mid + (ah8 * bl9)) | 0;
            hi = (hi + (ah8 * bh9)) | 0;
            var w17 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w17 >> 26)) | 0;
            w17 &= 0x3ffffff;
            /* k = 18 */
            lo = (al9 * bl9);
            mid = (al9 * bh9);
            mid = (mid + (ah9 * bl9)) | 0;
            hi = (ah9 * bh9);
            var w18 = (((c + lo) | 0) + ((mid & 0x1fff) << 13)) | 0;
            c = (((hi + (mid >> 13)) | 0) + (w18 >> 26)) | 0;
            w18 &= 0x3ffffff;
            o[0] = w0;
            o[1] = w1;
            o[2] = w2;
            o[3] = w3;
            o[4] = w4;
            o[5] = w5;
            o[6] = w6;
            o[7] = w7;
            o[8] = w8;
            o[9] = w9;
            o[10] = w10;
            o[11] = w11;
            o[12] = w12;
            o[13] = w13;
            o[14] = w14;
            o[15] = w15;
            o[16] = w16;
            o[17] = w17;
            o[18] = w18;
            if (c != 0)
            {
                o[19] = c;
                @out.Length++;
            }
            return @out;
        }

        private BN bigMulTo(BN self, BN num, BN @out)
        {
            @out.Negative = num.Negative ^ self.Negative;
            @out.Length = self.Length + num.Length;

            Array.Resize(ref @out.words, @out.Length);

            long carry = 0;
            long hncarry = 0;
            int k;
            for (k = 0; k < @out.Length - 1; k++) {
                // Sum all words with the same `i + j = k` and accumulate `ncarry`,
                // note that ncarry could be >= 0x3ffffff
                var ncarry = hncarry;
                hncarry = 0;
                int rword = (int)(carry & 0x3ffffff);
                var maxJ = Math.Min(k, num.Length - 1);
                for (var j = Math.Max(0, k - self.Length + 1); j <= maxJ; j++)
                {
                    var i = k - j;
                    long a = self.words[i] | 0;
                    long b = num.words[j] | 0;
                    long r = a * b;

                    uint lo = (uint)(r & 0x3ffffff);
                    ncarry = (ncarry + ((r / 0x4000000) | 0)) | 0;
                    lo = (uint)((lo + rword) | 0);
                    rword = (int)(lo & 0x3ffffff);
                    ncarry = (ncarry + (lo >> 26)) | 0;

                    hncarry += ncarry >> 26;
                    ncarry &= 0x3ffffff;
                }
                @out.words[k] = rword;
                carry = ncarry;
                ncarry = hncarry;
            }
            if (carry != 0)
            {
                @out.words[k] = (int)carry;
            }
            else
            {
                @out.Length--;
            }

            return @out._strip();
        }

        private BN jumboMulTo(BN self, BN num, BN @out)
        {
            // Temporary disable, see https://github.com/indutny/bn.js/issues/211
            // var fftm = new FFTM();
            // return fftm.mulp(self, num, out);
            return bigMulTo(self, num, @out);
        }

        private BN mulTo(BN num, BN @out)
        {
            BN res;
            var len = this.Length + num.Length;
            if (this.Length == 10 && num.Length == 10)
            {
                res = comb10MulTo(this, num, @out);
            }
            else if (len < 63)
            {
                res = smallMulTo(this, num, @out);
            }
            else if (len < 1024)
            {
                res = bigMulTo(this, num, @out);
            }
            else
            {
                res = jumboMulTo(this, num, @out);
            }

            return res;
        }

        /// <summary>
        /// Multiply `this` by `num`
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        public BN Mul(BN num)
        {
            var @out = new BN();
            @out.words = new int[this.Length + num.Length];
            return this.mulTo(num, @out);
        }

        /// <summary>
        /// Multiply employing FFT
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        public BN Mulf(BN num)
        {
            var @out = new BN();
            @out.words = new int[this.Length + num.Length];
            return jumboMulTo(this, num, @out);
        }

        /// <summary>
        /// In-place Multiplication
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        public BN Imul(BN num)
        {
            return this.Clone().mulTo(num, this);
        }

        /// <summary>
        /// In-place Multiplication
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Imuln(long num)
        {
            var isNegNum = num < 0;
            if (isNegNum) num = -num;

            Functions.Assert(num < 0x4000000);

            // Carry
            long carry = 0;
            int i;
            for (i = 0; i < this.Length; i++)
            {
                var w = (this.words[i] | 0) * num;
                var lo = (w & 0x3ffffff) + (carry & 0x3ffffff);
                carry >>= 26;
                carry += (w / 0x4000000) | 0;
                // NOTE: lo is 27bit maximum
                carry += lo >> 26;
                this.words[i] = (int)(lo & 0x3ffffff);
            }

            if (carry != 0)
            {
                Array.Resize(ref this.words, this.Length + 1);
                this.words[i] = (int)carry;
                this.Length++;
            }

            return isNegNum ? this.Ineg() : this;
        }

        /// <summary>
        /// Multiply `this` by `num`
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Muln(long num)
        {
            return this.Clone().Imuln(num);
        }

        /// <summary>
        /// Square (`this` * `this`)
        /// </summary>
        /// <returns></returns>
        public BN Sqr()
        {
            return this.Mul(this);
        }

        /// <summary>
        /// Square (`this` * `this`) in-place
        /// </summary>
        /// <returns></returns>
        public BN Isqr()
        {
            return this.Imul(this.Clone());
        }

        /// <summary>
        /// Raise `this` to the power of `num`
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        public BN Pow(BN num)
        {
            var w = toBitArray(num);
            if (w.Length == 0) return new BN(1);

            // Skip leading zeroes
            var res = this;
            int i;
            for (i = 0; i < w.Length; i++, res = res.Sqr())
            {
                if (w[i] != 0) break;
            }

            if (++i < w.Length)
            {
                for (var q = res.Sqr(); i < w.Length; i++, q = q.Sqr())
                {
                    if (w[i] == 0) continue;

                    res = res.Mul(q);
                }
            }

            return res;
        }

        /// <summary>
        /// Shift-left in-place
        /// </summary>
        /// <param name="bits"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Iushln(int bits)
        {
            Functions.Assert(bits >= 0);

            var r = bits % 26;
            var s = (bits - r) / 26;
            int carryMask = (0x3ffffff >> (26 - r)) << (26 - r);
            int i;

            if (r != 0)
            {
                int carry = 0;

                for (i = 0; i < this.Length; i++)
                {
                    var newCarry = this.words[i] & carryMask;
                    var c = ((this.words[i] | 0) - newCarry) << r;
                    this.words[i] = c | carry;
                    carry = newCarry >> (26 - r);
                }

                if (carry != 0)
                {
                    Array.Resize(ref this.words, this.Length + 1);
                    this.words[i] = carry;
                    this.Length++;
                }
            }

            if (s != 0)
            {
                Array.Resize(ref this.words, this.Length + s);

                for (i = this.Length - 1; i >= 0; i--)
                {
                    this.words[i + s] = this.words[i];
                }

                for (i = 0; i < s; i++)
                {
                    this.words[i] = 0;
                }

                this.Length += s;
            }

            return this._strip();
        }

        /// <summary>
        /// Shift-left in-place
        /// </summary>
        /// <param name="bits"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Ishln(int bits)
        {
            // TODO(indutny): implement me
            Functions.Assert(this.Negative == 0);
            return this.Iushln(bits);
        }

        /// <summary>
        /// Shift-right in-place
        /// </summary>
        /// <param name="bits"></param>
        /// <param name="hint">A lowest bit before trailing zeroes</param>
        /// <param name="extended">If is present - it will be filled with destroyed bits</param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Iushrn(int bits, int hint = 0, BN? extended = null)
        {
            Functions.Assert(bits >= 0);
            int h;
            if (hint != 0)
            {
                h = (hint - (hint % 26)) / 26;
            }
            else
            {
                h = 0;
            }

            var r = bits % 26;
            var s = Math.Min((bits - r) / 26, this.Length);
            var mask = 0x3ffffff ^ ((0x3ffffff >> r) << r);
            var maskedWords = extended;

            h -= s;
            h = Math.Max(0, h);

            int i;
            // Extended mode, copy masked part
            if (maskedWords != null)
            {
                Array.Resize(ref maskedWords.words, s);
                for (i = 0; i < s; i++)
                {
                    maskedWords.words[i] = this.words[i];
                }
                maskedWords.Length = s;
            }

            if (s == 0)
            {
                // No-op, we should not move anything at all
            }
            else if (this.Length > s)
            {
                this.Length -= s;
                for (i = 0; i < this.Length; i++)
                {
                    this.words[i] = this.words[i + s];
                }
            }
            else
            {
                this.words[0] = 0;
                this.Length = 1;
            }

            int carry = 0;
            for (i = this.Length - 1; i >= 0 && (carry != 0 || i >= h); i--)
            {
                var word = this.words[i] | 0;
                this.words[i] = (carry << (26 - r)) | (word >> r);
                carry = word & mask;
            }

            // Push carried bits as a mask
            if (maskedWords != null && carry != 0)
            {
                Array.Resize(ref maskedWords.words, maskedWords.Length + 1);
                maskedWords.words[maskedWords.Length++] = carry;
            }

            if (this.Length == 0)
            {
                this.words[0] = 0;
                this.Length = 1;
            }

            return this._strip();
        }

        /// <summary>
        /// Shift-right in-place
        /// </summary>
        /// <param name="bits"></param>
        /// <param name="hint">A lowest bit before trailing zeroes</param>
        /// <param name="extended">If is present - it will be filled with destroyed bits</param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Ishrn(int bits, int hint = 0, BN? extended = null)
        {
            // TODO(indutny): implement me
            Functions.Assert(this.Negative == 0);
            return this.Iushrn(bits, hint, extended);
        }

        /// <summary>
        /// Shift-left
        /// </summary>
        /// <param name="bits"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Shln(int bits)
        {
            return this.Clone().Ishln(bits);
        }

        /// <summary>
        /// Shift-left
        /// </summary>
        /// <param name="bits"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Ushln(int bits)
        {
            return this.Clone().Iushln(bits);
        }

        /// <summary>
        /// Shift-right
        /// </summary>
        /// <param name="bits"></param>
        /// <returns></returns>
        public BN Shrn(int bits)
        {
            return this.Clone().Ishrn(bits);
        }

        /// <summary>
        /// Shift-right
        /// </summary>
        /// <param name="bits"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Ushrn(int bits)
        {
            return this.Clone().Iushrn(bits);
        }

        /// <summary>
        /// Test if n bit is set
        /// </summary>
        /// <param name="bit"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public bool Testn(int bit)
        {
            Functions.Assert(bit >= 0);
            var r = bit % 26;
            var s = (bit - r) / 26;
            var q = 1 << r;

            // Fast case: bit is much higher than all existing words
            if (this.Length <= s) return false;

            // Check bit and return
            var w = this.words[s];

            return (w & q) != 0;
        }

        /// <summary>
        /// Clear bits with indexes higher or equal to `bits`
        /// </summary>
        /// <param name="bits"></param>
        /// <returns>Only lowers bits of number (in-place)</returns>
        /// <exception cref="BNException"></exception>
        public BN Imaskn(int bits)
        {
            Functions.Assert(bits >= 0);
            var r = bits % 26;
            var s = (bits - r) / 26;

            Functions.Assert(this.Negative == 0, "imaskn works only with positive numbers");

            if (this.Length <= s)
            {
                return this;
            }

            if (r != 0)
            {
                s++;
            }
            this.Length = Math.Min(s, this.Length);

            if (r != 0)
            {
                var mask = 0x3ffffff ^ ((0x3ffffff >> r) << r);
                this.words[this.Length - 1] &= mask;
            }

            return this._strip();
        }

        /// <summary>
        /// Clear bits with indexes higher or equal to `bits`
        /// </summary>
        /// <param name="bits"></param>
        /// <returns>Only lowers bits of number</returns>
        /// <exception cref="BNException"></exception>
        public BN Maskn(int bits)
        {
            return this.Clone().Imaskn(bits);
        }

        /// <summary>
        /// Add plain number `num` to `this`
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Iaddn(int num)
        {
            Functions.Assert(num < 0x4000000);
            if (num < 0) return this.Isubn(-num);

            // Possible sign change
            if (this.Negative != 0)
            {
                if (this.Length == 1 && (this.words[0] | 0) <= num)
                {
                    this.words[0] = num - (this.words[0] | 0);
                    this.Negative = 0;
                    return this;
                }

                this.Negative = 0;
                this.Isubn(num);
                this.Negative = 1;
                return this;
            }

            // Add without checks
            return this._iaddn(num);
        }

        private BN _iaddn(int num)
        {
            this.words[0] += num;

            // Carry
            int i;
            for (i = 0; i < this.Length && this.words[i] >= 0x4000000; i++)
            {
                this.words[i] -= 0x4000000;
                if (i == this.Length - 1)
                {
                    Array.Resize(ref this.words, i + 2);
                    this.words[i + 1] = 1;
                }
                else
                {
                    this.words[i + 1]++;
                }
            }
            this.Length = Math.Max(this.Length, i + 1);

            return this;
        }

        /// <summary>
        /// Subtract plain number `num` from `this`
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Isubn(int num)
        {
            Functions.Assert(num < 0x4000000);
            if (num < 0) return this.Iaddn(-num);

            if (this.Negative != 0)
            {
                this.Negative = 0;
                this.Iaddn(num);
                this.Negative = 1;
                return this;
            }

            this.words[0] -= num;

            if (this.Length == 1 && this.words[0] < 0)
            {
                this.words[0] = -this.words[0];
                this.Negative = 1;
            }
            else
            {
                // Carry
                for (var i = 0; i < this.Length && this.words[i] < 0; i++)
                {
                    this.words[i] += 0x4000000;
                    this.words[i + 1] -= 1;
                }
            }

            return this._strip();
        }

        /// <summary>
        /// Addition
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Addn(int num)
        {
            return this.Clone().Iaddn(num);
        }

        /// <summary>
        /// Subtraction
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Subn(int num)
        {
            return this.Clone().Isubn(num);
        }

        /// <summary>
        /// Absolute value
        /// </summary>
        /// <returns></returns>
        public BN Iabs()
        {
            this.Negative = 0;

            return this;
        }

        /// <summary>
        /// Absolute value
        /// </summary>
        /// <returns>Absolute clone of `this`</returns>
        public BN Abs()
        {
            return this.Clone().Iabs();
        }

        private BN _ishlnsubmul(BN num, long mul, int shift)
        {
            var len = num.Length + shift;
            int i;

            this._expand(len);

            long w;
            long carry = 0;
            for (i = 0; i < num.Length; i++)
            {
                w = (this.words[i + shift] | 0) + carry;
                var right = (num.words[i] | 0) * mul;
                w -= right & 0x3ffffff;
                carry = (w >> 26) - ((right / 0x4000000) | 0);
                this.words[i + shift] = (int)(w & 0x3ffffff);
            }
            for (; i < this.Length - shift; i++)
            {
                w = (this.words[i + shift] | 0) + carry;
                carry = w >> 26;
                this.words[i + shift] = (int)(w & 0x3ffffff);
            }

            if (carry == 0) return this._strip();

            // Subtraction overflow
            Functions.Assert(carry == -1);
            carry = 0;
            for (i = 0; i < this.Length; i++)
            {
                w = -(this.words[i] | 0) + carry;
                carry = w >> 26;
                this.words[i] = (int)(w & 0x3ffffff);
            }
            this.Negative = 1;

            return this._strip();
        }

        private BNDivResult _wordDiv(BN num, DivMode mode = DivMode.None)
        {
            var shift = this.Length - num.Length;

            var a = this.Clone();
            var b = num;

            // Normalize
            var bhi = b.words[b.Length - 1] | 0;
            var bhiBits = BN._countBits(bhi);
            shift = 26 - bhiBits;
            if (shift != 0)
            {
                b = b.Ushln(shift);
                a.Iushln(shift);
                bhi = b.words[b.Length - 1] | 0;
            }

            // Initialize quotient
            var m = a.Length - b.Length;
            BN? q = null;

            if (mode != DivMode.Mod)
            {
                q = new BN();
                q.Length = m + 1;
                q.words = new int[q.Length];
                for (var i = 0; i < q.Length; i++)
                {
                    q.words[i] = 0;
                }
            }

            var diff = a.Clone()._ishlnsubmul(b, 1, m);
            if (diff.Negative == 0)
            {
                a = diff;
                if (q != null)
                {
                    q.words[m] = 1;
                }
            }

            for (var j = m - 1; j >= 0; j--)
            {
                long first = (b.Length + j < a.words.Length) ? a.words[b.Length + j] : 0;
                long second = (b.Length + j - 1 < a.words.Length) ? a.words[b.Length + j - 1] : 0;
                long qj = (first | 0) * 0x4000000 +
                  (second | 0);

                // NOTE: (qj / bhi) is (0x3ffffff * 0x4000000 + 0x3ffffff) / 0x2000000 max
                // (0x7ffffff)
                qj = Math.Min((qj / bhi) | 0, 0x3ffffff);

                a._ishlnsubmul(b, qj, j);
                while (a.Negative != 0)
                {
                    qj--;
                    a.Negative = 0;
                    a._ishlnsubmul(b, 1, j);
                    if (!a.IsZero())
                    {
                        a.Negative ^= 1;
                    }
                }
                if (q != null)
                {
                    q.words[j] = (int)qj;
                }
            }
            if (q != null)
            {
                q._strip();
            }
            a._strip();

            // Denormalize
            if (mode != DivMode.Div && shift != 0)
            {
                a.Iushrn(shift);
            }

            return new BNDivResult {
                Div = q ?? null,
                Mod = a
            };
        }

        /// <summary>
        /// Quotient and modulus obtained by dividing
        /// </summary>
        /// <param name="num"></param>
        /// <param name="mode">Can be set to `mod` to request mod only, to `div` to request div only, or be absent to request both div & mod</param>
        /// <param name="positive">Is true if unsigned mod is requested</param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BNDivResult Divmod(BN num, DivMode mode = DivMode.None, bool positive = false)
        {
            Functions.Assert(!num.IsZero());

            if (this.IsZero())
            {
                return new BNDivResult
                {
                    Div = new BN(0),
                    Mod = new BN(0)
                };
            }

            BN? div = null, mod = null;
            BNDivResult res;
            if (this.Negative != 0 && num.Negative == 0)
            {
                res = this.Neg().Divmod(num, mode);

                if (mode != DivMode.Mod)
                {
                    div = res.Div.Neg();
                }

                if (mode != DivMode.Div)
                {
                    mod = res.Mod.Neg();
                    if (positive && mod.Negative != 0)
                    {
                        mod.Iadd(num);
                    }
                }

                return new BNDivResult
                {
                    Div = div,
                    Mod = mod
                };
            }

            if (this.Negative == 0 && num.Negative != 0)
            {
                res = this.Divmod(num.Neg(), mode);

                if (mode != DivMode.Mod)
                {
                    div = res.Div.Neg();
                }

                return new BNDivResult
                {
                    Div = div,
                    Mod = res.Mod
                };
            }

            if ((this.Negative & num.Negative) != 0)
            {
                res = this.Neg().Divmod(num.Neg(), mode);

                if (mode != DivMode.Div)
                {
                    mod = res.Mod.Neg();
                    if (positive && mod.Negative != 0)
                    {
                        mod.Isub(num);
                    }
                }

                return new BNDivResult
                {
                    Div = res.Div,
                    Mod = mod
                };
            }

            // Both numbers are positive at this point

            // Strip both numbers to approximate shift value
            if (num.Length > this.Length || this.Cmp(num) < 0)
            {
                return new BNDivResult
                {
                    Div = new BN(0),
                    Mod = this
                };
            }

            // Very short reduction
            if (num.Length == 1)
            {
                if (mode == DivMode.Div)
                {
                    return new BNDivResult
                    {
                        Div = this.Divn(num.words[0]),
                        Mod = null
                    };
                }

                if (mode == DivMode.Mod)
                {
                    return new BNDivResult
                    {
                        Div = null,
                        Mod = new BN(this.Modrn(num.words[0]))
                    };
                }

                return new BNDivResult
                {
                    Div = this.Divn(num.words[0]),
                    Mod = new BN(this.Modrn(num.words[0]))
                };
            }

            return this._wordDiv(num, mode);
        }

        /// <summary>
        /// Divide (`this` / `num`)
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Div(BN num)
        {
            return this.Divmod(num, DivMode.Div, false).Div;
        }

        /// <summary>
        /// Reduct (`this` % `num`)
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Mod(BN num)
        {
            return this.Divmod(num, DivMode.Mod, false).Mod;
        }

        /// <summary>
        /// Reduct (`this` % `num`)
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Umod(BN num)
        {
            return this.Divmod(num, DivMode.Mod, true).Mod;
        }

        /// <summary>
        /// Rounded division (`this` / `num`)
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN DivRound(BN num)
        {
            var dm = this.Divmod(num);

            // Fast case - exact division
            if (dm.Mod.IsZero()) return dm.Div;

            var mod = dm.Div.Negative != 0 ? dm.Mod.Isub(num) : dm.Mod;

            var half = num.Ushrn(1);
            var r2 = num.Andln(1);
            var cmp = mod.Cmp(half);

            // Round down
            if (cmp < 0 || (r2 == 1 && cmp == 0)) return dm.Div;

            // Round up
            return dm.Div.Negative != 0 ? dm.Div.Isubn(1) : dm.Div.Iaddn(1);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public int Modrn(int num)
        {
            var isNegNum = num < 0;
            if (isNegNum) num = -num;

            Functions.Assert(num <= 0x3ffffff);
            long p = (1 << 26) % num;

            var acc = 0;
            for (var i = this.Length - 1; i >= 0; i--)
            {
                acc = (int)((p * acc + (this.words[i] | 0)) % num);
            }

            return isNegNum ? -acc : acc;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        [Obsolete("DEPRECATED")]
        public int Modn(int num)
        {
            return this.Modrn(num);
        }

        /// <summary>
        /// In-place division by number
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Idivn(int num)
        {
            var isNegNum = num < 0;
            if (isNegNum) num = -num;

            Functions.Assert(num <= 0x3ffffff);

            long carry = 0;
            for (var i = this.Length - 1; i >= 0; i--)
            {
                long w = (this.words[i] | 0) + carry * 0x4000000;
                this.words[i] = (int)((w / num) | 0);
                carry = w % num;
            }

            this._strip();
            return isNegNum ? this.Ineg() : this;
        }

        /// <summary>
        /// Division by number
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Divn(int num)
        {
            return this.Clone().Idivn(num);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="p"></param>
        /// <returns>Extended GCD results</returns>
        /// <exception cref="BNException"></exception>
        public BNExtendedGCDResult Egcd(BN p)
        {
            Functions.Assert(p.Negative == 0);
            Functions.Assert(!p.IsZero());

            var x = this;
            var y = p.Clone();

            if (x.Negative != 0)
            {
                x = x.Umod(p);
            }
            else
            {
                x = x.Clone();
            }

            // A * x + B * y = x
            var A = new BN(1);
            var B = new BN(0);

            // C * x + D * y = y
            var C = new BN(0);
            var D = new BN(1);

            var g = 0;

            while (x.IsEven() && y.IsEven())
            {
                x.Iushrn(1);
                y.Iushrn(1);
                ++g;
            }

            var yp = y.Clone();
            var xp = x.Clone();

            while (!x.IsZero())
            {
                int i, im;
                for (i = 0, im = 1; (x.words[0] & im) == 0 && i < 26; ++i, im <<= 1) ;
                if (i > 0)
                {
                    x.Iushrn(i);
                    while (i-- > 0)
                    {
                        if (A.IsOdd() || B.IsOdd())
                        {
                            A.Iadd(yp);
                            B.Isub(xp);
                        }

                        A.Iushrn(1);
                        B.Iushrn(1);
                    }
                }

                int j, jm;
                for (j = 0, jm = 1; (y.words[0] & jm) == 0 && j < 26; ++j, jm <<= 1) ;
                if (j > 0)
                {
                    y.Iushrn(j);
                    while (j-- > 0)
                    {
                        if (C.IsOdd() || D.IsOdd())
                        {
                            C.Iadd(yp);
                            D.Isub(xp);
                        }

                        C.Iushrn(1);
                        D.Iushrn(1);
                    }
                }

                if (x.Cmp(y) >= 0)
                {
                    x.Isub(y);
                    A.Isub(C);
                    B.Isub(D);
                }
                else
                {
                    y.Isub(x);
                    C.Isub(A);
                    D.Isub(B);
                }
            }

            return new BNExtendedGCDResult {
                A = C,
                B = D,
                Gcd = y.Iushln(g)
            };
        }

        // This is reduced incarnation of the binary EEA
        // above, designated to invert members of the
        // _prime_ fields F(p) at a maximal speed
        internal BN _invmp(BN p)
        {
            Functions.Assert(p.Negative == 0);
            Functions.Assert(!p.IsZero());

            var a = this;
            var b = p.Clone();

            if (a.Negative != 0)
            {
                a = a.Umod(p);
            }
            else
            {
                a = a.Clone();
            }

            var x1 = new BN(1);
            var x2 = new BN(0);

            var delta = b.Clone();

            while (a.Cmpn(1) > 0 && b.Cmpn(1) > 0)
            {
                int i, im;
                for (i = 0, im = 1; (a.words[0] & im) == 0 && i < 26; ++i, im <<= 1) ;
                if (i > 0)
                {
                    a.Iushrn(i);
                    while (i-- > 0)
                    {
                        if (x1.IsOdd())
                        {
                            x1.Iadd(delta);
                        }

                        x1.Iushrn(1);
                    }
                }

                int j, jm;
                for (j = 0, jm = 1; (b.words[0] & jm) == 0 && j < 26; ++j, jm <<= 1) ;
                if (j > 0)
                {
                    b.Iushrn(j);
                    while (j-- > 0)
                    {
                        if (x2.IsOdd())
                        {
                            x2.Iadd(delta);
                        }

                        x2.Iushrn(1);
                    }
                }

                if (a.Cmp(b) >= 0)
                {
                    a.Isub(b);
                    x1.Isub(x2);
                }
                else
                {
                    b.Isub(a);
                    x2.Isub(x1);
                }
            }

            BN res;
            if (a.Cmpn(1) == 0)
            {
                res = x1;
            }
            else
            {
                res = x2;
            }

            if (res.Cmpn(0) < 0)
            {
                res.Iadd(p);
            }

            return res;
        }

        /// <summary>
        /// GCD
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Gcd(BN num)
        {
            if (this.IsZero()) return num.Abs();
            if (num.IsZero()) return this.Abs();

            var a = this.Clone();
            var b = num.Clone();
            a.Negative = 0;
            b.Negative = 0;

            // Remove common factor of two
            int shift;
            for (shift = 0; a.IsEven() && b.IsEven(); shift++)
            {
                a.Iushrn(1);
                b.Iushrn(1);
            }

            do
            {
                while (a.IsEven())
                {
                    a.Iushrn(1);
                }
                while (b.IsEven())
                {
                    b.Iushrn(1);
                }

                var r = a.Cmp(b);
                if (r < 0)
                {
                    // Swap `a` and `b` to make `a` always bigger than `b`
                    var t = a;
                    a = b;
                    b = t;
                }
                else if (r == 0 || b.Cmpn(1) == 0)
                {
                    break;
                }

                a.Isub(b);
            } while (true);

            return b.Iushln(shift);
        }

        /// <summary>
        /// Inverse `this` modulo `num`
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN Invm(BN num)
        {
            return this.Egcd(num).A.Umod(num);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <returns>True if the number is even</returns>
        public bool IsEven()
        {
            return (this.words[0] & 1) == 0;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <returns>True if the number is odd</returns>
        public bool IsOdd()
        {
            return (this.words[0] & 1) == 1;
        }

        /// <summary>
        /// And first word and num
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        public int Andln(int num)
        {
            return this.words[0] & num;
        }

        /// <summary>
        /// Increment at the bit position in-line
        /// Add 1 << `bit` to the number
        /// </summary>
        /// <param name="bit"></param>
        /// <returns></returns>
        public BN Bincn(int bit)
        {
            var r = bit % 26;
            var s = (bit - r) / 26;
            var q = 1 << r;

            // Fast case: bit is much higher than all existing words
            if (this.Length <= s)
            {
                this._expand(s + 1);
                this.words[s] |= q;
                return this;
            }

            // Add bit and propagate, if needed
            var carry = q;
            int i;
            for (i = s; carry != 0 && i < this.Length; i++)
            {
                var w = this.words[i] | 0;
                w += carry;
                carry = w >> 26;
                w &= 0x3ffffff;
                this.words[i] = w;
            }
            if (carry != 0)
            {
                this.words[i] = carry;
                this.Length++;
            }
            return this;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <returns>True if the number is zero</returns>
        public bool IsZero()
        {
            return this.Length == 1 && this.words[0] == 0;
        }

        /// <summary>
        /// Compare two numbers
        /// </summary>
        /// <param name="num"></param>
        /// <returns>-1 (`this` < `num`), 0 (`this` == `num`), or 1 (`this` > `num`) depending on the comparison result (ucmp, cmpn)</returns>
        /// <exception cref="BNException"></exception>
        public int Cmpn(int num)
        {
            var negative = num < 0;

            if (this.Negative != 0 && !negative) return -1;
            if (this.Negative == 0 && negative) return 1;

            this._strip();

            int res;
            if (this.Length > 1)
            {
                res = 1;
            }
            else
            {
                if (negative)
                {
                    num = -num;
                }

                Functions.Assert(num <= 0x3ffffff, "Number is too big");

                var w = this.words[0] | 0;
                res = w == num ? 0 : w < num ? -1 : 1;
            }
            if (this.Negative != 0) return -res | 0;
            return res;
        }

        /// <summary>
        /// Compare two numbers
        /// </summary>
        /// <param name="num"></param>
        /// <returns>-1 (`this` < `num`), 0 (`this` == `num`), or 1 (`this` > `num`) depending on the comparison result (ucmp, cmpn)</returns>
        public int Cmp(BN num)
        {
            if (this.Negative != 0 && num.Negative == 0) return -1;
            if (this.Negative == 0 && num.Negative != 0) return 1;

            var res = this.Ucmp(num);
            if (this.Negative != 0) return -res | 0;
            return res;
        }

        /// <summary>
        /// Unsigned comparison
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        public int Ucmp(BN num)
        {
            // At this point both numbers have the same sign
            if (this.Length > num.Length) return 1;
            if (this.Length < num.Length) return -1;

            var res = 0;
            for (var i = this.Length - 1; i >= 0; i--)
            {
                var a = this.words[i] | 0;
                var b = num.words[i] | 0;

                if (a == b) continue;
                if (a < b)
                {
                    res = -1;
                }
                else if (a > b)
                {
                    res = 1;
                }
                break;
            }
            return res;
        }

        /// <summary>
        /// Compare two numbers
        /// </summary>
        /// <param name="num"></param>
        /// <returns>True if (`this` > `num`)</returns>
        /// <exception cref="BNException"></exception>
        public bool Gtn(int num)
        {
            return this.Cmpn(num) == 1;
        }

        /// <summary>
        /// Compare two numbers
        /// </summary>
        /// <param name="num"></param>
        /// <returns>True if (`this` > `num`)</returns>
        public bool Gt(BN num)
        {
            return this.Cmp(num) == 1;
        }

        /// <summary>
        /// Compare two numbers
        /// </summary>
        /// <param name="num"></param>
        /// <returns>True if (`this` >= `num`)</returns>
        /// <exception cref="BNException"></exception>
        public bool Gten(int num)
        {
            return this.Cmpn(num) >= 0;
        }

        /// <summary>
        /// Compare two numbers
        /// </summary>
        /// <param name="num"></param>
        /// <returns>True if (`this` >= `num`)</returns>
        public bool Gte(BN num)
        {
            return this.Cmp(num) >= 0;
        }

        /// <summary>
        /// Compare two numbers
        /// </summary>
        /// <param name="num"></param>
        /// <returns>True if (`this` < `num`)</returns>
        /// <exception cref="BNException"></exception>
        public bool Ltn(int num)
        {
            return this.Cmpn(num) == -1;
        }

        /// <summary>
        /// Compare two numbers
        /// </summary>
        /// <param name="num"></param>
        /// <returns>True if (`this` < `num`)</returns>
        public bool Lt(BN num)
        {
            return this.Cmp(num) == -1;
        }

        /// <summary>
        /// Compare two numbers
        /// </summary>
        /// <param name="num"></param>
        /// <returns>True if (`this` <= `num`)</returns>
        /// <exception cref="BNException"></exception>
        public bool Lten(int num)
        {
            return this.Cmpn(num) <= 0;
        }

        /// <summary>
        /// Compare two numbers
        /// </summary>
        /// <param name="num"></param>
        /// <returns>True if (`this` <= `num`)</returns>
        public bool Lte(BN num)
        {
            return this.Cmp(num) <= 0;
        }

        /// <summary>
        /// Compare two numbers
        /// </summary>
        /// <param name="num"></param>
        /// <returns>True if (`this` == `num`)</returns>
        /// <exception cref="BNException"></exception>
        public bool Eqn(int num)
        {
            return this.Cmpn(num) == 0;
        }

        /// <summary>
        /// Compare two numbers
        /// </summary>
        /// <param name="num"></param>
        /// <returns>True if (`this` == `num`)</returns>
        public bool Eq(BN num)
        {
            return this.Cmp(num) == 0;
        }

        public static Red Red(string num)
        {
            return new Red(num);
        }

        public static Red Red(BN num)
        {
            return new Red(num);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="ctx"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN ToRed(Red ctx)
        {
            Functions.Assert(this.red == null, "Already a number in reduction context");
            Functions.Assert(this.Negative == 0, "red works only with positives");
            return ctx.ConvertTo(this)._forceRed(ctx);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN FromRed()
        {
            Functions.Assert(this.red != null, "fromRed works only with numbers in reduction context");
            return this.red.ConvertFrom(this);
        }

        internal BN _forceRed(Red ctx)
        {
            this.red = ctx;
            return this;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="ctx"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN ForceRed(Red ctx)
        {
            Functions.Assert(this.red == null, "Already a number in reduction context");
            return this._forceRed(ctx);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN RedAdd(BN num)
        {
            Functions.Assert(this.red != null, "redAdd works only with red numbers");
            return this.red.Add(this, num);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN RedIAdd(BN num)
        {
            Functions.Assert(this.red != null, "redIAdd works only with red numbers");
            return this.red.Iadd(this, num);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN RedSub(BN num)
        {
            Functions.Assert(this.red != null, "redSub works only with red numbers");
            return this.red.Sub(this, num);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN RedISub(BN num)
        {
            Functions.Assert(this.red != null, "redISub works only with red numbers");
            return this.red.Isub(this, num);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN RedShl(int num)
        {
            Functions.Assert(this.red != null, "redShl works only with red numbers");
            return this.red.Shl(this, num);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN RedMul(BN num)
        {
            Functions.Assert(this.red != null, "redMul works only with red numbers");
            this.red._verify2(this, num);
            return this.red.Mul(this, num);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN RedIMul(BN num)
        {
            Functions.Assert(this.red != null, "redMul works only with red numbers");
            this.red._verify2(this, num);
            return this.red.Imul(this, num);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN RedSqr()
        {
            Functions.Assert(this.red != null, "redSqr works only with red numbers");
            this.red._verify1(this);
            return this.red.Sqr(this);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN RedISqr()
        {
            Functions.Assert(this.red != null, "redISqr works only with red numbers");
            this.red._verify1(this);
            return this.red.Isqr(this);
        }

        // Square root over p
        /// <summary>
        /// 
        /// </summary>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN RedSqrt()
        {
            Functions.Assert(this.red != null, "redSqrt works only with red numbers");
            this.red._verify1(this);
            return this.red.Sqrt(this);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN RedInvm()
        {
            Functions.Assert(this.red != null, "redInvm works only with red numbers");
            this.red._verify1(this);
            return this.red.Invm(this);
        }

        // Return negative clone of `this` % `red modulo`
        /// <summary>
        /// 
        /// </summary>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN RedNeg()
        {
            Functions.Assert(this.red != null, "redNeg works only with red numbers");
            this.red._verify1(this);
            return this.red.Neg(this);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public BN RedPow(BN num)
        {
            Functions.Assert(this.red != null && num.red == null, "redPow(normalNum)");
            this.red._verify1(this);
            return this.red.Pow(this, num);
        }

        // Prime numbers with efficient reduction
        private static Dictionary<string, MPrime> primes = new Dictionary<string, MPrime> {
            { "k256", null },
            { "p224", null },
            { "p192", null },
            { "p25519", null }
        };

        /// <summary>
        /// Exported mostly for testing purposes, use plain name instead
        /// </summary>
        /// <param name="name"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public static MPrime Prime(string name)
        {
            // Cached version of prime
            if (primes[name] != null) return primes[name];

            MPrime prime;
            if (name == "k256")
            {
                prime = new K256();
            }
            else if (name == "p224")
            {
                prime = new P224();
            }
            else if (name == "p192")
            {
                prime = new P192();
            }
            else if (name == "p25519")
            {
                prime = new P25519();
            }
            else
            {
                throw new BNException("Unknown prime " + name);
            }
            primes[name] = prime;

            return prime;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public static Mont Mont(string num)
        {
            return new Mont(num);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="num"></param>
        /// <returns></returns>
        /// <exception cref="BNException"></exception>
        public static Mont Mont(BN num)
        {
            return new Mont(num);
        }
    }
}