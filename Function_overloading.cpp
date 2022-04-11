#include<iostream>
using namespace std;

int sum(int a, int b){
    int c= a+b;
    return c;

}
int sum(int a, int b,  int c){
    int d = a*b*c;
    return d; 
 

} 

int main(){
        int x,y,z;
        cout<<"Enter the value of first value :"<<endl ; 
        cin>>x;
        cout<<"Enter the value  second value :"<<endl ;
        cin>>y;
        cout<<"Enter the value  third value :"<<endl ;
        cin>>z;
        cout<<"The sum of the x and y is :"<<sum(x,y)<<endl ;
        cout<<"The multiple of the value :"<<sum(x,y,z);




    return 0;
}