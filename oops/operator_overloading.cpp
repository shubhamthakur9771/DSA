// operator overloading since + operator is only used to sum two primitive types of
// data types but if we want to use + operator to find sum of two complex data types
// then we can do it as below by redefining and the condition for its working is that 
// both the operands must be of complex data types

#include <iostream>
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
    }
    void showdata()
    {
        cout << "\n"
             << a << "\n"
             << b;
    }
    complex operator +(complex c)
    {
        complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return (temp);
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(3, 4);
    c2.setdata(4, 5);

    c3 = c1.operator +(c2);  // c1 has called the add function and c2 has been passed as an argument in it and the value finally returned from here will be stored in c3
    c3.showdata();
    c3 = c1 +(c2); // another way of using + directly
    c3.showdata();
    return 0;
}