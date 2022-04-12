#include<iostream>
#include<iomanip>


using namespace std;

int main(){

cout<<"Constant, Manipulation and Operator Precedence "<<endl;

int a = 44;
cout<<"The value of a is: "<<a <<endl;
a = 22;
cout<<"The value of a is: "<<a <<endl <<endl;


// constant 
cout<<"Constant value"<<endl;
const int  b = 77;
cout<<"The value of b constant is: "<<b <<endl<<endl;





// **************Manipulator**************
cout<<"Manipulator in c++ using iomanip header file "<<endl;
int p=233, x=33, y=45;
cout<<"The value of p is:"<<setw(12)<<p<<endl;
cout<<"The value of q is:"<<setw(12)<<x<<endl;
cout<<"The value of r  is:"<<setw(12)<<y<<endl;

cout<<"The value of p Without setw is:"<<p<<endl;
cout<<"The value of q Without setw is:"<<x<<endl;
cout<<"The value of r Without setw is:"<<y<<endl <<endl;




// ***********************operator precendence*********************** 
int r=5, s=2;
int t= (a*5)+s;
cout<<"The value of t is: "<<t<<endl;

    return 0;

}