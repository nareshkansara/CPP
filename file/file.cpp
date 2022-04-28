#include<iostream>
#include<fstream>

using namespace std;
int main(){

        // string st = "Lalit kansara";
        // // Opening files using constructor and Writing it 
        // ofstream out("sample.txt");      //write Operation
        // out<<st;




    //opening files using constructor and reading it 
    string st2;
    ifstream in("sample.txt");
    // in>>st2;  

    getline(in, st2);  // Get full line 
    cout<<st2;


    return 0;

}