#include<iostream>
using namespace std;


int glo = 6;
void sum (){
    int a;
    cout << glo;

}

int main(){
    int glo = 9;
    glo = 78;
    glo = 56;
    // int a = 4;
    // int b = 5;
    int a=1, b=5;
    float pi = 3.15;
    char m = 'N';  //you can use only one character

    sum();
    cout<<"\n" <<glo;

    cout<<"\n This is tutorial 4. Here the value of a is--> " <<a<<"\n The value of b is "<<b;
    cout<<"\n The value of pi is: "<<pi;
    cout<<"\n The value of c is: " <<m;

    return 0;
}