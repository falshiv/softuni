using System;
using System.Linq;

namespace _09._Extract_Middle_Elements
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();

            Stack<int> expressionFinder = new Stack<int>(input.Length);

            for (int i = 0; i < input.Length; i++)
            {
                // if (input[i] == '(')
                // {
                //     expressionFinder.Push(i);
                
                // }

                //uncoment on the next hacktoberfest.

                if (input[i] == ')')
                {
                    int start = expressionFinder.Pop();
                    Console.WriteLine(input.Substring(start, i - start + 1));
                }

            }
        }
    }
}
