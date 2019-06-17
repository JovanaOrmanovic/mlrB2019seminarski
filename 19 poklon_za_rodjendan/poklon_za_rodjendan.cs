using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace poklon_za_rodjendan
{
    class Program
    {
        static void Main(string[] args)
        {
            double n = double.Parse(Console.ReadLine());
            int m = int.Parse(Console.ReadLine());
            int brojac = 0;
            for (int i = 0; i < m; i++) {
                double cenaProizvoda = double.Parse(Console.ReadLine());
                if (cenaProizvoda <= n)
                    brojac++;
            }
            Console.WriteLine(brojac);
        }
    }
}
