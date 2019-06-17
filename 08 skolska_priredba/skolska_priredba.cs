using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace skolska_priredba
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int s = int.Parse(Console.ReadLine());
            int brDevojcica, brDecaka;
            brDecaka = s - 3 * n;
            brDevojcica = n - brDecaka;
            Console.WriteLine(brDecaka);
            Console.WriteLine(brDevojcica);
        }
    }
}
