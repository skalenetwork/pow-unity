using System;

namespace BNSharp
{
    public class BNException : Exception
    {
        public BNException() : base() { }

        public BNException(string message) : base(message) { }
    }
}
