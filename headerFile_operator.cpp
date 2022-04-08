#include<iostream>

using namespace std;

int main(){
    int a=8 , b=2 ;

    cout<<"following are the type of operators in c++"<<endl ;
    // Arthmetic operators 
    cout<<" \n The value of a+b is: "<<a+b;
    cout<<"\n The value of a-b is: "<<a-b;
    cout<<"\n The value of a*b is: "<<a*b;
    cout<<"\n The value of a/b is: "<<a/b; // a is integer data type 
    cout<<"\n The value of a%b is: "<<a%b;

    cout<<" \n The value of a++ is: "<<a++;
    cout<<" \n The value of a-- is: "<<a--;
    cout<<" \n The value of ++a is: "<<++a;
    cout<<" \n The value of --a is: "<<--a;
    cout<<endl;

//  comparison operator 
 cout<<"\n following are the comparison operators in c++" ;
    cout<<" \n The value of a==b is: "<<(a==b);
    cout<<" \n The value of a!=b is: "<<(a!=b);
    cout<<" \n The value of a<=b is: "<<(a<=b);
    cout<<" \n The value of a>=b is: "<<(a>=b);
    cout<<" \n The value of a>b is: "<<(a>b);
    cout<<" \n The value of a<b is: "<<(a<b);
    cout<<endl;

   
// logical operator 
 cout<<"\n following are the Logical operators in c++" ;
    cout<<"\n The value of this logical AND operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b));
    cout<<"\n The value of this logical OR operator ((a==b) ||(a<b)) is: "<<((a==b) || (a<b));
    cout<<"\n The value of this logical NOT operator (!(a==b)) is: "<<(!(a==b));



// assigment operators 
   int c=3, _ran=21;
   char d='r';


    return 0;

}