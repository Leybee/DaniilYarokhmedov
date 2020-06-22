using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp4
{
    class Text
    {
        private List<String> text = new List<String> { };
        public Text(String s)
        {
            text.Add(s);
        }
        public void append(String r)
        {
            text.Add(r);
        }
        public void dropLast()
        {
            text.RemoveAt(text.Count - 1);
        }
        void clearAll()
        {
            text.Clear();
        }
        public String this[int index]
        {
            get
            {
                return text[index];
            }
        }
        public void deleteInd(int ind)
        {
            text.RemoveAt(ind);
        }
        public void replace(String r, int i)
        {
            text[i] = r;
        }
        public int size
        {
            get
            {
                return text.Count;
            }

        }
        public void Show()
        {
            Console.WriteLine("=================================");
            for (int i = 0; i < text.Count; i++)
            {
                Console.WriteLine(text[i]);
            }
            Console.WriteLine("=================================");
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            String first = "Слiд друговi допомагати,";
            String second = "В пригодi завжди захищати,";
            String third = "Слiд жарти друга розумiти";
            String fourth = "Й самому жартувати вмiти.";
            Text text = new Text(first);
            text.append(second);
            text.append(third);
            text.append(fourth);
            Console.WriteLine("Laba_3, Yarokhmedov D., V-14");
            text.Show();
            Console.WriteLine("Кiлькiсть рядкiв - {0}", text.size);
            Console.WriteLine("=================================");
            Console.WriteLine("Отримуємо 1 та 4 строку в текстi, звернувшись до обєкта класу по iндексу");
            Console.WriteLine("=================================");
            Console.WriteLine(text[0]);
            Console.WriteLine(text[3]);
            Console.WriteLine("=================================");
        }
    }
}