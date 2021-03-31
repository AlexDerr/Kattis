using System;

namespace Kattis
{
    class Program
    {
        static void Main(string[] args)
        {
            int x, n, total, temp;

            x = int.Parse(Console.ReadLine());
            n = int.Parse(Console.ReadLine());

            total = x * (n + 1);

            for(int i = 0; i < n; i++)
            {
                temp = int.Parse(Console.ReadLine());
                total -= temp;
            }

            Console.WriteLine(total);
        }
    }
}
