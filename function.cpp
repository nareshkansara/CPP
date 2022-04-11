#include <iostream>
using namespace std;

// method 1
// int sum(int a ,int b){
//     int c=a+b;
//     return c;
// }

int sum(int, int);

int main()
{
    int num1, num2;

    cout << "Enter first value " << endl;
    cin >> num1;
    cout << "Enter second value " << endl;
    cin >> num2;
    cout << "total of sum is: " << sum(num1, num2);
    // num1 and num2 are actual parameters

    return 0;
}

int sum(int a, int b)
     // Formal parameters a and b wil be taking values from actual parameters num1 and num2
{
    int c = a + b;
    return c;
}