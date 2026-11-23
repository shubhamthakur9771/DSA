#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    void set_data(int, int);

    void show_data()
    {
        cout << "\n"
             << a << "\n"
             << b << "\n";
    }
};
// declaration of member function otside the class but to act as member function

void complex ::set_data(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    complex c1;
    c1.set_data(3, 4); // c1 is an object
    c1.show_data();

    return 0;
}