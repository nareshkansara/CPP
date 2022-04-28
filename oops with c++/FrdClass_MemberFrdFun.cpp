#include <iostream>
using namespace std;

// Forword delclaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumReal(complex, complex);
    int sumImag(complex, complex);

};

class complex
{
    int a, b;
    friend int calculator ::sumReal(complex o1, complex o2);

public:
    void setMember(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printMember()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
    friend class calculator ;
};

int calculator ::sumReal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumImag(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setMember(1, 2);
    o2.setMember(3, 6);

    calculator add;
    int res = add.sumReal(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;

int resc = add.sumImag(o1, o2);
    cout << "The sum of Imagnory  part of o1 and o2 is " << resc << endl;
    return 0;
}