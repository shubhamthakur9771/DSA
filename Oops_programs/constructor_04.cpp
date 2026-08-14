// complex constructor
// constructor using passing the argument
#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    complex(int x, int y) // parametrized constructor
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
    complex() // default constructor ie. if we will not create any constructor and directly create an object then our compiler will create this type of constructor by default and also it will not reflect in our source code because we have not created it.
    {
        a = 0;
        b = 0;
        cout << a << "\n"
             << b << "\n";
    }
     // complex(complex c)  --> it will lead to error because c wil take the value c4 as complex and again this constructor will again caled and recursion will occur.
       // so to resolve this issue we use here refrence variable
        // but refrence variable is not only a condition for creating copy constructor , te refrence passed to it must be of same complex type
    complex(complex &c)
    {
        a = c.a;
        b=c.b;
        cout << a << "\n"<< b << "\n";
    }
};

int main()
{
    complex c1(3, 4), // it will call first constructor ie. constructor with two arguments
        c2(5),        // it will call second constructor ie. constructor with 1 argument
        c3;          // it will call third constructor ie. constructor with no arguments or 0 arguments
       // c4(3, 8);
    complex c4(c1); // another way of writing complex c1
    return 0;
}