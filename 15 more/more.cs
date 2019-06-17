using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace more
{
    class Program
    {
        static void Main(string[] args)
        {
            var ponudeZaMore = new SortedDictionary<int, string>();
            string ulaz;
            while ((ulaz = Console.ReadLine()) != null) {
                string[] elementiUlaza = ulaz.Split();
                ponudeZaMore.Add(int.Parse(elementiUlaza[1]), elementiUlaza[0]);
            }
            foreach (var ponuda in ponudeZaMore) {
                Console.WriteLine(ponuda.Value);
            }
        }
    }
}
