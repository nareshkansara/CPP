#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout <<"your Roll No is " <<roll_no<<endl;
    }
};

class test : public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << " Your Result is Here: " <<endl
             << " Maths: " <<maths <<endl
             << " Physics:" <<physics <<endl;
    }
};



class Sports : public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT score is: " <<score <<endl;
    }
};

class Result : public test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        // print_number();
        print_marks();
        print_score();
      
        cout <<"Your total score is: " <<total <<endl;
    }
};

int main()
{

    Result naresh;
    // naresh.set_number(4200);
    naresh.set_marks(78.9, 99.5);
    naresh.set_score(9);
    naresh.display();

    return 0;
}