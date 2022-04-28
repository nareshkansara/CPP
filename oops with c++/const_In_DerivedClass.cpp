#include <iostream>
using namespace std;

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base1 Class Constructor Called " << endl;
    }
    void printDataBase1(void)
    {
        cout << "The value of Data1 is " << data1 << endl;
    }
};

class base2
{

    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "Base2 Class Constructor Called " << endl;
    }
    void printDataBase2(void)
    {
        cout << "The value of Data2 is " << data2 << endl;
    }
};

class Derived : public base1, public base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : base2(a), base1(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called " << endl;
    }
    void printDataDerived(void)
    {
        cout << "The value of Derived1 is " << derived1 << endl;
        cout << "The value of Derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived naresh(1, 3, 4, 5);
    naresh.printDataBase1();
    naresh.printDataBase2();
    naresh.printDataDerived();
    return 0;
}

/*
Note:

case 1 :
class B :public A{
    // order of execution of constructor -> Fist A() then B()

};

case 2 :
class A :   public B, Public C{
    // Order of execution of Constructor  -> B() then c() and A()

};

case 3 :
class A public B , virtual public C{
    // Order of execution of constructor -> C() then B() and A()

};

*/
