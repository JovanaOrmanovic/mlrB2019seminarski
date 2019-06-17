using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace masa_i_tezina
{
    class Program
    {
        static void Main(string[] args)
        {
            double masa=double.Parse(Console.ReadLine());
            double tezina;
            tezina = masa * 9.81;
            Console.WriteLine(tezina.ToString("0.00"));
        }
    }
}
