namespace BNSharp
{
    internal class Functions
    {
        public static void Assert(bool val, string? msg = null)
        {
            if (!val) throw new BNException(msg ?? "Assertion failed");
        }
    }
}
