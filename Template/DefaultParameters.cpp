#include<iostream>
using namespace std;

template <class T1= int , class T2=float, class T3=char>
class naresh{
    public :
    T1 a;
    T2 b;
    T3 c;
    naresh (T1 x, T2 y, T3 z){
        a= x;
        b= y; 
        c= z;

    }
    void display (){
        cout<<"The value of a is : " <<a <<endl;
        cout<<"The value of b is : " <<b <<endl;
        cout<<"The value of c is : " <<c <<endl;

    }
};


int main(){

naresh<> h(4, 3.1 ,'c');
h.display();
cout<<endl;
 

naresh<float, char , char> g(1.6 , 'c', 'o');
g.display();

    return 0;
}