using System;
using Prog_Lib;

namespace Prog2_Lab7
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Laba_7, Yarokhmedov D., V-14\n");
            Console.WriteLine("Створений список:");
            lib word = new lib(8);
            word.NewHead(15);
            word.NewHead(11);
            word.NewHead(7);
            WriteOut(word.FillArray());
            Console.WriteLine("Видаляємо числа пiсля максимального:");
            word.DelAfterMax();
            WriteOut(word.FillArray());
            Console.WriteLine("Видаляємо числа меншi за середнє значення:");
            word.DelBelowAverage();
            WriteOut(word.FillArray());
        }
        static void WriteOut(double[] input) //функція виводу
        {
            for (int i = 0; i < input.Length; i++)
            {
                Console.Write(input[i]);
                Console.Write(' ');
            }
            Console.WriteLine();
            return;
        }
    }
}