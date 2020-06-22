using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Expression
{
    public class ExpressionClass
    {
        private double a, b, c, d;// Наші значення
        public ExpressionClass(double a, double b, double c, double d)// Конструктор з параметрами
        {
            this.a = a;
            this.b = b;
            this.c = c;
            this.d = d;
        }
        public double Value()
        {
            return ((4 * Math.Log10(a / b) + 1) / (c + b - d + a));
        }
    }
}