#include <iostream>

using namespace std;
int main()
{

    /*
    Loop in c++

    There are three types of loops in c++
    1. For lop
    2. While loop
    3. Do-while loop

     */

    //  1. for loop in c++
    /*
    syntax for for loop
    for(initialalization; condition; updation)
    {
        loop body(c++ code);
    }
     */
    int i = 1;
    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl;
    }
    cout<<endl;

    // while loop
    /* syntax
    while(condition)
    {
        c++ statements
    }
    */
    int x = 1;
    while (x <= 20)
    {
        cout << x << endl;
        x++;
    }
    cout << endl;

    // do while loop
    int q = 1;
    do
    {
        cout << q << endl;
        q++;
    } while (q <= 15);
    cout<<endl;

    // 6th multipal table using for loop
    int j = 1;
    for (j = 0; j <= 10; j++)
    {
        cout << j * 6 << endl;
    }
    cout<<endl;


    // 2th multipal table using while loop
    int p = 0;
    while (p <= 10)
    {
        cout << p * 2 <<endl;
        p++;
       

    }
cout<<endl;

    // 3th multipal table using do while loop
    int e = 1;
    do
    {
        cout << e * 3 << endl;
        e++;
    } while (e <= 10);

cout<<endl;

    return 0;
}