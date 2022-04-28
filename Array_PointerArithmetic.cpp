#include <iostream>
using namespace std;

int main()
{
    int marks[] = {11, 45, 6, 7, 6, 242};
    cout << "Marks of [0] is " << marks[0] << endl;
    cout << "Marks of [1] is " << marks[1] << endl;
    cout << "Marks of [2] is " << marks[2] << endl;
    cout << "Marks of [3] is " << marks[3] << endl;
    cout << "Marks of [4] is " << marks[4] << endl;
    cout << "Marks of [5] is " << marks[5] << endl;

    for (int i = 0; i <= 5; i++)
    {
        cout << "The value of using for loop marks " << i << " is " << marks[i] << endl;
    }

    cout << endl;

    // using do-while loop to print array values
    int j = 0;
    do
    {
        cout << "The value of marks using do-while " << j << " is " << marks[j] << endl;
        j++;
    } while (j <= 5);

    cout << endl;

    // using while loop
    int x = 0;
    while (x <= 5)

    {
        cout << "The value of marks while loop " << x << " is " << marks[x] << endl;
        x++;
    }
    cout << endl;

    marks[3] = 4555;

    // pontes and arrays
    int *p = marks;
    cout<<*(p++)<<endl;
    cout<<*(p++)<<endl;

/* 

    cout << "The value of makrs[0] is " << *p << endl;
    cout << "The value of makrs[1] is " << *(p + 1) << endl;
    cout << "The value of makrs[2] is " << *(p + 2) << endl;
    cout << "The value of makrs[3] is " << *(p + 3) << endl;

*/

    return 0;
}