// program to access static member variable without creating any object ie. using static member function.
// accessing using class name and its resolution operator.
#include <iostream>
using namespace std;
class account
{
private:
    int balance;      // instance member variable.
    static float roi; // static member variable / class variable.
public:
    void setbalance(int b)
    {
        balance = b;
    }
    static void setroi(float r) // static member function.
    {
        roi = r;
    }
};
float account ::roi = 3.5f;

int main()
{
    account a1, a2;
    a1.setroi(4.5f);       // accessing using creating object.
    account::setroi(4.5f); // accessing without creating object ie. using static member function.
    return 0;
}