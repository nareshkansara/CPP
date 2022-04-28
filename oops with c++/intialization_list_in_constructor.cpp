#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    Test(int i, int j) : a(i), b(a+j)

    {
        cout << "Constructor executed " << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{

    Test t(2, 4);

    return 0;
}


/*
syntax for initialization list in constructor:
constructor(argument list) : initilization- section
{
    assigment + other
}

 */
