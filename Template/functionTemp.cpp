#include <iostream>
using namespace std;

// float funcAverage(int a , int b){
//     float avg = (a+b)/2.0;
//     return avg;

// }

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return 0;
}

int main()
{
    float a;
    a = funcAverage(5, 2);
    cout <<a;
    
    return 0;
}