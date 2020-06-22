using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Expression;

namespace Лабораторна_робота__6
{
    class Program
    {
        static void Main(string[] args)
        {
            ExpressionClass[] obj = new ExpressionClass[3];//Створює масиви
            obj[0] = new ExpressionClass(1, 2, 3, 4);
            obj[1] = new ExpressionClass(2, 1, 4, 5);
            obj[2] = new ExpressionClass(4, 2, 5, 8);
            Console.WriteLine("Laba_6, Yarokhmedov D., V-14");
            for (int i = 0; i < 3; i++)
            {
                Console.WriteLine($"Value {i + 1} = {Math.Round(obj[i].Value(), 5)}");
            }
            Console.ReadKey();
        }
    }
}