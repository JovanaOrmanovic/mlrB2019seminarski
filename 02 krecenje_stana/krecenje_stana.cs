using System;

namespace krecenje_stana
{
    class Program
    {
        static void Main(string[] args)
        {
            double P = double.Parse(Console.ReadLine());
            double x = double.Parse(Console.ReadLine());
            double y = double.Parse(Console.ReadLine());
            double ukupnoPotrebnoL = P * x;
            if (ukupnoPotrebnoL <= y)
                Console.WriteLine("DA");
            else
                Console.WriteLine("NE");
        }
    }
}
