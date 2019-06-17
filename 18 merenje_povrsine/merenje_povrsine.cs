using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace merenje_povrsine
{
    class Program
    {
        static void Main(string[] args)
        {
            double povrsina=double.Parse(Console.ReadLine());
            int indikator = int.Parse(Console.ReadLine());
            double novaPovrsina;
            if (indikator == 1)
                novaPovrsina = povrsina * 100;
            else if (indikator == 2)
                novaPovrsina = povrsina * 10000;
            else
                novaPovrsina = povrsina * 1000000;
            Console.WriteLine(novaPovrsina.ToString("0.00"));

        }
    }
}
