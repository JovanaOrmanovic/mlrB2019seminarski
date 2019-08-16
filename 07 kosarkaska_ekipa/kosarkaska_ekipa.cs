using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace kosarkaska_ekipa
{
    class Program
    {


        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            // brojac1 broji igrace pozicije 1, brojac2 broji igrace pozicije 2 itd.
            int brojac1 = 0, brojac2 = 0, brojac3 = 0, brojac4 = 0, brojac5 = 0;
            for (int i = 1; i <= n; i++)
            {
                int pozicija = int.Parse(Console.ReadLine());
                switch (pozicija)
                {
                case 1:
                    brojac1++;
                    break;
                case 2:
                    brojac2++;
                    break;
                case 3:
                    brojac3++;
                    break;
                case 4:
                    brojac4++;
                    break;
                case 5:
                    brojac5++;
                    break;
                }
            }
            Console.WriteLine("1 : " + brojac1);
            Console.WriteLine("2 : " + brojac2);
            Console.WriteLine("3 : " + brojac3);
            Console.WriteLine("4 : " + brojac4);
            Console.WriteLine("5 : " + brojac5);
        }
    }
}
