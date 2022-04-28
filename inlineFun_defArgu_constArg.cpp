#include<iostream>
using namespace std;

inline int product(int a, int b){
    int c = a*b;
    return c;
}

// Note : Not recommended to use below lines with inline fuction
// int product(int a, int b){
//     static int c = 0; //this excutes only once
//     c= c+1;    // Next time this function is run the value of c will be retained 

//     return a*b+c;
     
// }


int main(){
    int  x,y;
    cout<<"Enter The value of a and b"<<endl;
    cin>>x>>y;
    cout<<"The multiple the value of a and b is: "<<product(x,y)<<endl;
    cout<<"The multiple the value of a and b is: "<<product(x,y)<<endl;
    cout<<"The multiple the value of a and b is: "<<product(x,y)<<endl;
    cout<<"The multiple the value of a and b is: "<<product(x,y)<<endl;
    cout<<"The multiple the value of a and b is: "<<product(x,y)<<endl;
    cout<<"The multiple the value of a and b is: "<<product(x,y)<<endl;
    cout<<"The multiple the value of a and b is: "<<product(x,y)<<endl;
    cout<<"The multiple the value of a and b is: "<<product(x,y)<<endl;


    return 0;
}   