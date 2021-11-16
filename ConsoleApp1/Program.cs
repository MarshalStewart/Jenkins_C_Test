using System;
using System.IO;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            File.WriteAllText("artifact.txt", "SUCCESS");
        }
    }
}
