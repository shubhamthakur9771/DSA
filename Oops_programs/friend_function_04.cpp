// function overloading of unary function using freind function.
// overloading of any function using friend function will need an extra parameter than overloading by member function
#include <iostream>
#include <conio.h>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    };
    void showdata()
    {
        cout << a << "\n"
             << b << "\n";
    };
    friend complex operator-(complex);
};
complex operator-(complex X)
{
    complex temp;
    temp.a = -X.a;
    temp.b = -X.b;
    return (temp);
};
int main()
{
    complex c1, c2, c3, c4;
    c1.setdata(3, 4);
    c2.setdata(5, 7);
    c3 = -c1;
    c3.showdata();
    c4= -c2;
    c4.showdata();

    return 0;
}