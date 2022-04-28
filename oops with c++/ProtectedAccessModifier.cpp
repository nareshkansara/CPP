#include <iostream>
using namespace std;

class base
{
protected:
    int a;

private:
    int b;
};

/*
for a protected mamber:
                     public derivation     private derivation       Protected derivation

private member       Not Inherited         Not Inheited             Not Inherited
protected member     Protected             Private                  Protected
public  member       Public                Private                  Protected

*/

class Derived : protected base
{

};

int main()
{
base b;
Derived d;
// cout<<d.a; will not work since a is protected in both as well as derived class 
    return 0;
}