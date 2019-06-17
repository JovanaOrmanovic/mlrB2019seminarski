using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace autobusi
{
    class Program
    {
        static void Main(string[] args)
        {
            double t = double.Parse(Console.ReadLine());
            double s = double.Parse(Console.ReadLine());
            double v1 = double.Parse(Console.ReadLine());
            //racunamo vreme potrebno prvom autobusu da stigne od grada A do grada B
            double t1 = s / v1;
            //racunamo za koliko vremena drugi autobus mora da stigne od grada A do grada B da bi stigao istovremeno sa prvim
            double t2 = t1 - t;
            //racunamo kojom brzinom mora da se krece drugi autobus da bi za t2 sata presao s km
            double v2 = s / t2;
            Console.WriteLine(v2.ToString("0.00"));
        }
    }
}
