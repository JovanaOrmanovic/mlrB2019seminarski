using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace niz
{
    class Program
    {
        static void Main(string[] args)
        {
            int n=int.Parse(Console.ReadLine());
            int[] a = new int[n];
            int[] b = new int[n / 2];
            for (int i = 0; i < n; i++) {
                a[i] = int.Parse(Console.ReadLine());
            }
            for (int j = 0; j < n/2; j++) {
                b[j] = a[j] * a[n - 1-j];
            }
            for (int k = 0; k < n / 2; k++)
                Console.Write(b[k]+" ");
            Console.WriteLine();
        }
    }
}
