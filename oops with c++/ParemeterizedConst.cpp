#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b) // paremeterized constractor
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "Your number is (" << x << "," << y << ")" << endl;
    }
};

int main()
{
    point p(1, 2);
    p.displayPoint();

    p.displayPoint();
    point q(3, 4);

    return 0;
}