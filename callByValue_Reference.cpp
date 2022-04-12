#include<iostream>
using namespace std;

// call by reference using c++ reference variable
int & swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;

}



// method 1 
// void swap(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }


int main(){
    int x=34, y=3;
    cout<<"The value of x is "<<x <<" and the value of y is "<<y <<endl;
    // swap(&x, &y);
    swap(x,y) =2000;
    cout<<" The  value of x is "<<x <<" and the value of y is "<<y;

     
    return 0;


}
