using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace medijana_i_moda
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int[] a = new int[n];
            double medijana;
            for (int i = 0; i < n; i++) {
                a[i] = int.Parse(Console.ReadLine());
            }
            Array.Sort(a);
            if (n % 2 == 0)
                medijana = (a[n / 2] + a[n / 2 - 1]) / 2.0;
            else
                medijana = a[n / 2];
            //Napravimo niz b koji ce da cuva koliko se puta pojavila 
            //koja ocena. b[i-1] ce sadrzati broj pojavljivvanja 
            //ocene i. Kako ocena ima 5, toliko ima i elemenata naseg niza. 
            int[] b = new int[5];
            //prilikom pravljenja niza svi elementi se inicijalizuju na 0 
            for (int i = 1; i < n; i++) {
                b[a[i] - 1]++;
            }
            int najvisePojavljivanja = b.Max();
            for (int i = 0; i < 5; i++) {
                if (najvisePojavljivanja == b[i])
                    Console.Write((int)(i+1)+ " ");
            }
            Console.WriteLine();
            Console.WriteLine((int)medijana);
            
        }
    }
}
