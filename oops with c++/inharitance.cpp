#include <iostream>
using namespace std;

// base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
    Employee() {} // drefault Constractor
};

/*
//syntax
 class {{derived-class-name}} : {{visibility-mode}} base-class-name
{
    class member/method/etc;
}

Note :
1. Defalut Visibility mode is private
2. Public Visibility MOde : Public member of the class becomes Public members of the Derived class
3. Private visibility Mode : public members of the base class becomes Private members of the Derived Class
4. Privete member are never Inherited

*/

// creating a programmer class derived from Employee Base class

class programmer : public Employee
{
public:
    programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{

    Employee naresh(1), mahendra(2);
    cout << naresh.salary << endl;
    cout << mahendra.salary << endl;
    cout << mahendra.id << endl;


    programmer karan(122);
    cout << karan.languageCode << endl;
    karan.getData();
    return 0;
}