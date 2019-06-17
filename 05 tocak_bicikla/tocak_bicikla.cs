using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace tocak_bicikla
{
    class Program
    {
        static void Main(string[] args)
        {
            double r = double.Parse(Console.ReadLine());
            int p = int.Parse(Console.ReadLine());
            double obim = 2 * r * Math.PI;
            double ukupanPut = p * obim;
            // centimetre pretvaramo u metre
            ukupanPut = ukupanPut * 0.01;
            Console.WriteLine(ukupanPut.ToString("0.00"));
        }
    }
}
