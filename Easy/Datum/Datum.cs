using System;

namespace Kattis
{
    class Program
    {
        static void Main(string[] args)
        {
            int day, month;
            string[] line;

            line = Console.ReadLine().Split();

            day = int.Parse(line[0]);
            month = int.Parse(line[1]);



            DateTime date = new DateTime(2009, month, day);

            Console.WriteLine(date.DayOfWeek.ToString());
        }
    }
}
