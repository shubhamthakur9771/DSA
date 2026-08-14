// constructor using passing the argument
#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
        cout << a << "\n"
             << b << "\n";
    }
    complex(int k)
    {
        a = k;
        cout << a << "\n";
    }
    complex()
    {
        a = 0;
        b = 0;
        cout << a << "\n"
             << b << "\n";
    }
};

int main()
{
    complex c1(3, 4), // it will call first constructor ie. constructor with two arguments
        c2(5),        // it will call second constructor ie. constructor with 1 argument
        c3,           // it will call third constructor ie. constructor with no arguments or 0 arguments
        c4(3, 8);
    complex c5 = complex(4, 5); // another way of writing complex c1
    return 0;
}