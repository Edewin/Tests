using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class TestClass
    {
        public TestClass()
        {
            this.MyInVar1 = 1;
            this.MyInVar2 = 2;
        }

        // private:
        private double MyInVar1;
        private double MyInVar2;
        private double MyOutVar;

        // public:
        public double getMyInVar1() { return this.MyInVar1; }
        public double getMyInVar2() { return this.MyInVar2; }

        public void setMyInVar1(double a) { this.MyInVar1 = a; }
        public void setMyInVar2(double b) { this.MyInVar2 = b; }

        public double SimpleMethod()
        {
            this.MyOutVar = this.MyInVar1 * this.MyInVar2;

            return this.MyOutVar;
        }

        public double myMethod(double a, double b)
        {
            this.MyInVar1 = a;
            this.MyInVar2 = b;

            this.MyOutVar = a * b;

            return this.MyOutVar;
        }

    }
}
