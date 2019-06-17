using System;
namespace SavrsenBroj
{
    class Program
    {
        static void Main(string[] args)
        {
            int broj = int.Parse(Console.ReadLine());
            int ukupanZbirDelioca = 1;
            for (int i = 2; i <= broj / 2; i++) {
                if (broj % i == 0)
                    ukupanZbirDelioca += i;
            }
            if (ukupanZbirDelioca == broj)
                Console.WriteLine("DA");
            else
                Console.WriteLine("NE");
        }
    }
}
