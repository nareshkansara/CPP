#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i <10; i++)

    {
        if(i==3){
            break;
        }
         cout<<i<<endl;

    }
    cout<<endl;



for (int j = 0; j <10; j++)

    {
        if(j==2){
            continue;
        }
         cout<<j<<endl;
         
    
    }
    return 0;
}