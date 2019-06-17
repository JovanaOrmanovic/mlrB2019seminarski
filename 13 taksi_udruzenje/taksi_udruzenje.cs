using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace taksi_udruzenje
{
    class Program
    {
        static void Main(string[] args)
        {
            string ulaz;
            string[] podaci;
            int brMin;
            int Min;
            ulaz = Console.ReadLine();
            podaci = ulaz.Split();
            brMin = int.Parse(podaci[0]);
            Min = int.Parse(podaci[1]);
            while ((ulaz = Console.ReadLine()) != null) {
                podaci = ulaz.Split();
                int minDoDolaska = int.Parse(podaci[1]);
                if (minDoDolaska < Min)
                {
                    brMin = int.Parse(podaci[0]);
                    Min = minDoDolaska;
                }
            }
            Console.WriteLine(brMin);
        }
    }
}
