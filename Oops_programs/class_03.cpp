#include <iostream>
using namespace std;
class account
{
private:
    int balance;      // instance member variable
    static float roi; // static member variable / class variable
public:
    void setbalance(int b)
    {
        balance = b;
    }
};
float account ::roi = 3.5f;

int main()
{
    account a1, a2;
    return 0;
}