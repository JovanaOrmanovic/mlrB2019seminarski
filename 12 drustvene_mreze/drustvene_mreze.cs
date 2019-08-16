using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace drustvene_mreze
{
    class Program
    {

        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int brInsta = 0, brFB = 0, brTw = 0;
            // brInsta - broj korisnika instagrama
            // brFB - broj korisnika facebook-a
            // brTw - broj korisnika twitter-a
            string najpopularnijaMreza;
            int maxGlasova;
            for (int i = 1; i <= n; i++)
            {
                int glas = int.Parse(Console.ReadLine());
                if (glas == 1)
                    brInsta++;
                else if (glas == 2)
                    brFB++;
                else
                    brTw++;
            }

            maxGlasova = brInsta;
            najpopularnijaMreza = "Instagram";
            if (maxGlasova < brFB)
            {
                maxGlasova = brFB;
                najpopularnijaMreza = "Facebook";
            }
            if (maxGlasova < brTw)
            {
                maxGlasova = brTw;
                najpopularnijaMreza = "Twitter";
            }

            Console.WriteLine(najpopularnijaMreza);
            Console.WriteLine(((maxGlasova * 100.0) / n).ToString("0.00") + "%");
        }
    }
}
