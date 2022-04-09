// Pointer to object
/*
#include <iostream>

 using namespace std;

class complex {
int real , imginary ;
public :
void getData(){
    cout<<" The real part is: " <<real<<endl;
    cout<<" The Imaginary part is: " <<imginary<<endl;

}

void setData(int a, int b){
    real = a;
    imginary = b;

}

};


 int main(){
complex *ptr = new complex;
(*ptr).setData(23,54);
(*ptr).getData();



     return 0 ;

 }
 */



//Pointer to object with Arrow Operator 
#include <iostream>

 using namespace std;

class complex {
int real , imginary ;
public :
void getData(){
    cout<<" The real part is: " <<real<<endl;
    cout<<" The Imaginary part is: " <<imginary<<endl;

}

void setData(int a, int b){
    real = a;
    imginary = b;

}

};


 int main(){
     complex *ptr = new complex;
     ptr ->setData(23,56);
     ptr->getData();


     //Array of object 
     complex *ptr1 = new complex[3];
     ptr1 ->setData(12,34);
     ptr1 -> getData();



     return 0 ;

 }

