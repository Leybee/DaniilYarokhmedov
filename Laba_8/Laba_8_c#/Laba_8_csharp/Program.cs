using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace std
{
    class Program
    {

        static void Main(string[] args)
        {
            Console.WriteLine("Laba_8, Yarokhmedov D., V-14");
            Math m = new Math();
            double a;
            double b;
            int c;
            while (true)
            {
                a = 0;
                b = 0;
                Console.WriteLine("[1] - Додавання");
                Console.WriteLine("[2] - Вiднiмання");
                Console.WriteLine("[3] - Множення");
                Console.WriteLine("[4] - Дiлення");
                Console.WriteLine("[0] - Вихiд");
                Console.WriteLine("Введiть дiю");
                c = Convert.ToInt32(Console.ReadLine());
                if (c == 0) break;
                Console.WriteLine("Введiть число а");
                a = Convert.ToDouble(Console.ReadLine());
                Console.WriteLine("Введiть число b");
                b = Convert.ToDouble(Console.ReadLine());
                switch (c)
                {
                    case 1:
                        Console.WriteLine("Результат операцiї - {0}", m.Add(a, b));
                        break;
                    case 2:
                        Console.WriteLine("Результат операцiї - {0}", m.Substraction(a, b));
                        break;
                    case 3:
                        Console.WriteLine("Результат операцiї - {0}", m.Multiplication(a, b));
                        break;
                    case 4:
                        Console.WriteLine("Результат операцiї - {0}", m.Division(a, b));
                        break;
                }
            }
        }
    }
}
