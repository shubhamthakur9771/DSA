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
    complex add(complex c)
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

    c3 = c1.add(c2);  // c1 has called the add function and c2 has been passed as an argument in it and the value finally returned from here will be stored in c3
    
    c3.showdata();
    return 0;
}