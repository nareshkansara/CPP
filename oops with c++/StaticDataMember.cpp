#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee member " << count << endl;
    }

    static void getcount(void)
    {
        // cout<<id ; throws an error
        cout << "The value of count is  " << count << endl;
    }
};

// count is the static data member of class employee
int employee ::count = 100; // default value is 0

int main()
{
    employee raj, karan, ram;
    raj.setData();
    raj.getData();
    employee ::getcount();

    karan.setData();
    karan.getData();
    employee ::getcount();

    ram.setData();
    ram.getData();
    employee ::getcount();

    return 0;
}