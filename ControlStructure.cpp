#include<iostream>

using namespace std;

int main(){

cout<<"Control Structure in c++"<<endl;

// ***************if-else-if-else leader*****************
int age ;
cout<<"Plaese enter your age :- ";
cin>>age;

/*
if((age<18) && (age>1)){
    cout<<"you are not eligiable "<<endl;
}
else if((age>18) && (age<60)) {
    cout<<"you are eligiable "<<endl;
} 
else if ((age>61) &&(age<120)) {
    cout<<"you are old citizen of india ";
}
else{
    cout<<"welcome to India";
}

*/


switch (age)
{
case 18:
    cout<<"your are engiable";
    break;

case 22:
    cout<<"you are 22";
    break;

case 26:
    cout<<"you are 26";
    break;

case 30:
    cout<<"you are 30";
    break;



default:
    cout<<"you cannot exit This case";
    break;
}
    return 0;

}