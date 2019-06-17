using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace telefonski_stub
{
    class Program
    {
        static void Main(string[] args)
        {
            double h = double.Parse(Console.ReadLine());
            double a = double.Parse(Console.ReadLine());
            // b predstavlja visinu na kojoj se stub prelomio
            double b = 0.5 * (h - (a * a) / h);
            Console.WriteLine(b.ToString("0.000"));
        }
    }
}
