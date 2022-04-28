#include<iostream>

using namespace std;

int main(){

// *******************Literal Data type******************


cout<<"Literal Data type" <<endl;
float t = 45.55f;
long double g = 45.55l;
cout<<"The size of 45.55 is "<<sizeof(45.55) <<endl;
cout<<"The size of 45.55f is "<<sizeof(45.55f) <<endl;
cout<<"The size of 45.55F is "<<sizeof(45.55F) <<endl;
cout<<"The size of 45.55l is "<<sizeof(45.55l) <<endl;
cout<<"The size of 45.55L is "<<sizeof(45.55L) <<endl;

cout<<endl;



// **************Reference variable*****************

cout<<"REFERENCE VARIABLE"<<endl;
float x = 455;
float & y = x;

cout<<x<<endl;
cout<<y<<endl;

cout<<endl;






// ***************type casting****************
cout<<"Type Casting"<<endl;
int p = 32.2;
float w = 35.4; 
cout<<"The value of p is: "<<float(p);
cout<<endl;
cout<<"The value of w is: "<<int(w);



return 0;

}