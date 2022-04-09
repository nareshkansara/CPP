#include <iostream>

using namespace std;

int main()
{

    // simple  pointer

    int a = 4;
    int *ptr = &a;
    cout << " The value of a is " << *(ptr) << endl;

    // new operator new[] in pointer
    int *arr = new int[3];
    arr[0] = 22;
    arr[1] = 20;
    arr[2] = 30;

    cout << " The value of arr[0] is " << arr[0] << endl;
    cout << " The value of arr[1] is " << arr[1] << endl;
    cout << " The value of arr[2] is " << arr[2] << endl;

    //  operator delete[] in pointer

    int *arr1 = new int[2];
    arr1[0] = 40;
    arr1[1] = 50;
    delete[] arr1;
    cout << "The value of arr1[0] is  " << arr1[0] << endl;
    cout << "The value of arr1[1] is  " << arr1[1] << endl;

    return 0;
}