using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace rodjendani
{
    class Program
    {

        struct datum
        {
            public int dan;
            public int mesec;
            public int godina;
        }

        static int cmp(datum d1, datum d2)
        {
            if (d1.godina > d2.godina)
                return 1;
            else if (d1.godina < d2.godina)
                return -1;
            else
            {
                if (d1.mesec > d2.mesec)
                    return 1;
                else if (d1.mesec < d2.mesec)
                    return -1;
                else
                {
                    if (d1.dan > d2.dan)
                        return 1;
                    else if (d1.dan < d2.dan)
                        return -1;
                    else
                        return 0;
                }
            }
        }
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            datum[] nizDatuma = new datum[n];
            for (int i = 0; i < n; i++)
            {
                string s = Console.ReadLine();
                nizDatuma[i].dan = int.Parse(s.Substring(0, 2));
                nizDatuma[i].mesec = int.Parse(s.Substring(3, 2));
                nizDatuma[i].godina = int.Parse(s.Substring(6, 4));
            }
            Array.Sort(nizDatuma, cmp);
            for (int i = 0; i < n; i++)
                Console.WriteLine(nizDatuma[i].dan + "." + nizDatuma[i].mesec + "." + nizDatuma[i].godina + ".");

        }
    }
}
