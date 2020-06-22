using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp7
{
    class Program
    {
        class Trapezoid
        {
            private static int[]coord = new int [8];
            public Trapezoid()
            {
                for (int i = 0; i < 8; i++)
                {
                    coord[i] = 0;
                }
            }
            public Trapezoid(Trapezoid t)
            {
                for (int i = 0; i < 8; i++)
                {
                    coord[i] = t[i];
                }
            }
            public Trapezoid(int[] t)
            {
                for (int i = 0; i < 8; i++)
                {
                    coord[i] = t[i];
                }
            }
            public static Trapezoid operator +(Trapezoid c1, Trapezoid c2)
            {
                int [] temp = new int [8];
                for (int i = 0; i < 8; i++)
                {
                    temp[i] = coord[i] + c1[i];
                }
                Trapezoid t = new Trapezoid(temp);
                return t;
            }
            public static Trapezoid operator -(Trapezoid c1, Trapezoid c2)
            {
                int[] temp = new int[8];
                for (int i = 0; i < 8; i++)
                {
                    temp[i] = coord[i] - c1[i];
                }
                Trapezoid t = new Trapezoid(temp);
                return t;
            }
            public static Trapezoid operator -(Trapezoid c1, int c2)
            {
                int[] temp = new int[8];
                for (int i = 0; i < 8; i++)
                {
                    temp[i] = coord[i] - c2;
                }
                Trapezoid t = new Trapezoid(temp);
                return t;
            }
            public static Trapezoid operator *(Trapezoid c1, Trapezoid c2)
            {
                int[] temp = new int[8];
                for (int i = 0; i < 8; i++)
                {
                    temp[i] = coord[i] * c1[i];
                }
                Trapezoid t = new Trapezoid(temp);
                return t;
            }
            public static Trapezoid operator /(Trapezoid c1, Trapezoid c2)
            {
                int[] temp = new int[8];
                for (int i = 0; i < 8; i++)
                {
                    temp[i] = coord[i] / c1[i];
                }
                Trapezoid t = new Trapezoid(temp);
                return t;
            }
            public double Perimetr()
            {
                int x1, y1, x2, y2, x3, y3, x4, y4;
                x1 = coord[0];
                y1 = coord[1];
                x2 = coord[2];
                y2 = coord[3];
                x3 = coord[4];
                y3 = coord[5];
                x4 = coord[6];
                y4 = coord[7];
                double AB = Math.Sqrt(Math.Pow((x2 - x1), 2) + Math.Pow((y2 - y1), 2));
                double BC = Math.Sqrt(Math.Pow((x3 - x2), 2) + Math.Pow((y3 - y2), 2));
                double CD = Math.Sqrt(Math.Pow((x4 - x3), 2) + Math.Pow((y4 - y3), 2));
                double AD = Math.Sqrt(Math.Pow((x1 - x4), 2) + Math.Pow((y1 - y3), 2));
                return (AB + BC + CD + AD);
            }
            double Ploshad()
            {
                int x1, y1, x2, y2, x3, y3, x4, y4;
                x1 = coord[0];
                y1 = coord[1];
                x2 = coord[2];
                y2 = coord[3];
                x3 = coord[4];
                y3 = coord[5];
                x4 = coord[6];
                y4 = coord[7];
                double A = Math.Sqrt(Math.Pow((x2 - x1), 2) + Math.Pow((y2 - y1), 2));
                double B = Math.Sqrt(Math.Pow((x3 - x2), 2) + Math.Pow((y3 - y2), 2));
                double C = Math.Sqrt(Math.Pow((x4 - x3), 2) + Math.Pow((y4 - y3), 2));
                double D = Math.Sqrt(Math.Pow((x1 - x4), 2) + Math.Pow((y1 - y3), 2));
                double square = ((A + B) / 2) * Math.Sqrt(Math.Pow(C, 2) - Math.Pow((Math.Pow(B - A, 2) + Math.Pow(C, 2) - Math.Pow(D, 2)) / (2 * (B - A)), 2));
                return square;
            }
            public void Show(String name)
            {
               
                Console.WriteLine("[{0},{1}],[{2},{3}],[{4},{5}],[{6},{7}],",coord[0], coord[1], coord[2], coord[3], coord[4], coord[5], coord[6], coord[7]);
                /*Console.WriteLine( "Периметр - " << Perimetr() );
                Console.WriteLine( "Площадь - " << Ploshad() );*/
            }
            public int this[int index]
            {
                get
                {
                    return coord[index];
                }

                set
                {
                    coord[index] = value;
                }
            }
        }
        static void Main(string[] args)
        {
            Console.WriteLine("Laba_4, Yarokhmedov D., V-14");
            int[] mass = new int [8] { 0, 0, 0, 0, 0, 0, 0, 0 };
            int[] mass1 = new int[8] { -2, 3, 0, -1, 3, 4, 5, -3 };
            int[] mass2 = new int[8] { 1, 6, 3, 2, 6, 7, 8, 0 };
            Trapezoid TR1 = new Trapezoid(mass);
            Trapezoid TR2 = new Trapezoid(mass1);
            Trapezoid TR3 = new Trapezoid(mass2);
            Console.WriteLine("TR3:");
            TR3.Show("TR3");
            Console.WriteLine("Зменшимо TR3 на 3 одиницi:");
            TR3 = TR3 - 3;
            TR3.Show("TR3");
            Console.WriteLine("TR2:");
            TR2.Show("TR2");
            Console.WriteLine("TR1:");
            TR2 = TR2 * TR3;
            TR2.Show("TR2");
        }
    }
}