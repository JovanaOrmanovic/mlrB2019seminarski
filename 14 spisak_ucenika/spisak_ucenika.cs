using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace spisak_studenata
{
    class Program
    {

        static int brojUDnevniku(string ucenik) {
            return int.Parse(ucenik.Substring(2));
        }

        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string[] spisakMatematika = new string[n];
            for (int k = 0; k < n; k++)
                spisakMatematika[k] = Console.ReadLine();
            int m = int.Parse(Console.ReadLine());
            string[] spisakProgramiranje = new string[m];
            for (int k = 0; k < m; k++)
                spisakProgramiranje[k] = Console.ReadLine();
            int i = 0, j = 0;
            int br = 0;
            while (i < spisakMatematika.Length && j < spisakProgramiranje.Length) {
                int brUDnevMat = brojUDnevniku(spisakMatematika[i]);
                int brUDnevProg = brojUDnevniku(spisakProgramiranje[j]);
                if (brUDnevMat<brUDnevProg)
                    i++;
                else if (brUDnevMat>brUDnevProg)
                    j++;
                else
                {
                    br++;
                    i++;
                    j++;
                }
            }
            Console.WriteLine(br);


        }
    }
}
