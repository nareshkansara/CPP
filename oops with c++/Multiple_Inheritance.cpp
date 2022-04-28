#include <iostream>
using namespace std;

class base1
{
protected:
    int base1;

public:
    void set_base1(int a)
    {
        base1 = a;
    }
};

class base2
{

protected:
    int base2;

public:
    void set_base2(int a)
    {
        base2 = a;
    }
};

class base3
{
protected:
    int base3;

public:
    void set_base3(int a)
    {
        base3 = a;
    }
};

class derived : public base1, public  base2, public  base3
{
public:
    void show()
    {
        cout << "The value of base1 " << base1 << endl;
        cout << "The value of base2 is " << base2 << endl;
        cout << "The value of base2 is " << base3 << endl;
        cout << "The sum of value is " << base1 + base2 + base3 << endl;
    }
};

int main()
{

    derived naresh;
    naresh.set_base1(10);
    naresh.set_base2(14);
    naresh.set_base3(1);
    naresh.show();

    return 0;
}


/*
syntax for inheriting in multiple Inheritance 

class derived : visibility-mode base1 , visibility-mode base2 
{
    class body of class derived 
};

 */ 