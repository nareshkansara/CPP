#include <iostream>
using namespace std;

class Dft_Const
{
    int data1;
    int data2;
    int data3;

public:
    Dft_Const(int a, int b = 1, int c = 3) // default constractor
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printNumber();
};

void Dft_Const ::printNumber()
{

    cout << "the data1 , data2, and data3 is " << data1 << "," << data2 << " and " << data3 << endl;
}

int main()
{
    Dft_Const f1(2);
    f1.printNumber();

    return 0;
}