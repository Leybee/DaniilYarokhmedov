using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp5
{
    class Row
    {
        private String row;
        public Row()
        {
            row = "";
        }
        public Row(String r)
        {
            row = r;
        }
        public int length()
        {
            return row.Length;
        }
        public void set(String r)
        {
            row = r;
        }
        public char this[int index]
        {
            get
            {
                return row[index];
            }
        }
        public String get()
        {
            return row;
        }
    }
    class Text
    {
        private List<Row> text = new List<Row> { };
        public Text(Row r)
        {
            text.Add(r);
        }
        public void append(Row r)
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
        public Row this[int index]
        {
            get
            {
                return text[index];
            }
            set
            {
                text[index] = value;
            }
        }
        public float getFrequencyOfCymvol(char ch)
        {
            Row temp = new Row();
            float frequencyCym = 0;
            float countCym = 0;
            for (int i = 0; i < text.Count; i++)
            {
                temp.set(text[i].get());
                for (int j = 0; j < temp.length(); j++)
                {
                    countCym++;
                    if (temp[j] == ch)
                    {
                        frequencyCym++;
                    }
                }
            }
            return frequencyCym / countCym;
        }
        public void deleteInd(int ind)
        {
            text.RemoveAt(ind);
        }
        public void replace(Row r, int i)
        {
            text[i] = r;
        }
        public void dropDublicate()
        {
            bool flag = false;
            string temp;
            for (int i = 0; i < text.Count; i++)
            {
                temp = text[i].get();
                for (int j = i; j < text.Count; j++)
                {
                    for (int k = 0; k < temp.Length && k < text[j].get().Length; k++)
                    {
                        if (temp[k] != text[j].get()[k])
                        {
                            flag = true;
                        }
                    }
                }
                if (!flag)
                {
                    deleteInd(i);
                }
                flag = false;
            }
        }
        public void Show()
        {
            Console.WriteLine("==========================");
            for (int i = 0; i < text.Count; i++)
            {
                Console.WriteLine(text[i].get());
            }
            Console.WriteLine("==========================");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Laba_2, Yarokhmedov D., V-14");
            Row first = new Row("Слiд друговi допомагати,");
            Row second = new Row("В пригодi завжди захищати,");
            Row third = new Row("Слiд жарти друга розумiти");
            Row fourth = new Row("Й самому жартувати вмiти.");
            Text text = new Text(first);
            text.append(second);
            text.append(third);
            text.append(fourth);
            text.Show();
            Console.WriteLine("Частота появи лiтери 'е' - {0}%", text.getFrequencyOfCymvol('е') * 100);
            Console.WriteLine("Частота появи лiтери 'о' - {0}%", text.getFrequencyOfCymvol('о') * 100);
            Console.WriteLine("Частота появи лiтери 'а' - {0}%", text.getFrequencyOfCymvol('а') * 100);
            text.Show();
            Console.WriteLine("Видалимо 1 та 3 рядок");
            text.deleteInd(0);
            text.deleteInd(1);
            text.Show();
            Console.WriteLine("Перший рядок продублюємо в третiй");
            text.append(second);
            text.Show();
            Console.WriteLine("Видалимо дублiкати з тексту");
            text.dropDublicate();
            text.Show();
        }
    }
}