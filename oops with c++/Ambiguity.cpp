#include <iostream>
using namespace std;
class base1
{

public:
    void show()
    {
        cout << "how are you ?" << endl;
    }
};




class base2
{

public:
    void show()
    {
        cout << "whatsup bro ?" << endl;
    }
};




class derived : public base1, public base2
{
    int a;
    void show()
    {
        base1::show();
    }
};




int main()
{

    base1 obj1;
    base2 obj2;

    obj1.show();
    obj2.show();

    return 0;
}