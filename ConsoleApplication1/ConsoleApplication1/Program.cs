using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("Hello C#!!!");

            TestClass test = null;

            allocMem( ref test);

            Console.WriteLine( Environment.NewLine + "test.myMethod( 23, 2) returns: {0}", test.myMethod(23, 2) );


            TestClass test2 = null;

            allocMem(ref test2);

            Console.WriteLine( Environment.NewLine + "test2.SimpleMethod() returns: {0}", test2.SimpleMethod() );

            Console.ReadKey();

        }

        /******************************************************************/
        // the main reason for making this little project is this method:
        
        static private void allocMem ( ref TestClass s)
        {
            s = new TestClass();
        }

        /******************************************************************/
    }
}
