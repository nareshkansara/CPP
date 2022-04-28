#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating a constructor
    // constructor is a special member function with same name as of the class.
    // it is used to initilize the object of its class
    // it is automatically invoked whenever an object is created
    complex(void); // constructor declaration

    void PrintData()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void) // this is a default constructor
{

    a = 12;
    b = 23;
    // cout<<"hello world" <<endl;
};

int main()
{

    complex c;
    c.PrintData();

    return 0;
}

/* Charecteristic of constuctors


1. It should be decleared in the public section of the class
2. they are automatically invoked whenever the object is created
3. They cannot return values and  do not have return type
4. It can have default arguments
5. we cannot refer to their address


 */