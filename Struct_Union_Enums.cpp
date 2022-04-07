#include<iostream>
using namespace std;

// typedef struct employee
// {
//     int EID;
//     char FavChar;
//     float salary;
//     string name; 
// } ep; 



struct employee
{
    int EID;
    char FavChar;
    float salary;
    string name; 
};



int main(){
    struct employee rajesh;
    rajesh.EID = 101;
    rajesh.FavChar = 'c';
    rajesh.salary = 1220;
    rajesh.name ="kansara";


cout<<"The value of Rejesh " <<rajesh.EID<<endl;
cout<<"The value of Rejesh " <<rajesh.FavChar<<endl;
cout<<"The value of Rejesh " <<rajesh.salary<<endl;
cout<<"The value of last name " <<rajesh.name<<endl;






    return 0;


    
} 