using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace mafini
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            int s = int.Parse(Console.ReadLine());
            int ukupanBrMafina = (17 - 8) * 6;
            if (ukupanBrMafina >= t + s)
                Console.WriteLine("DA");
            else
                Console.WriteLine("NE");
        }
    }
}
