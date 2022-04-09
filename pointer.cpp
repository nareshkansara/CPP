#include<iostream>
using namespace std;

int main(){
     int a =56;
     int* b;
     b= &a;
    cout<<"the address of a is "<<&a<<endl;
    // cout<<"the address of a is "<<b<<endl;

    cout<<"The value at adderss is "<<*b<<endl;



    return 0;
}