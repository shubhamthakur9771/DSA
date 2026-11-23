#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    complex()
    {
        cout << "hello constructor"
             << "\n";
    }
};

int main()
{
    complex c1;         // constructor runs 1 time for 1 object
    complex c2, c3, c4; // constructor runs three times for three objects or called tis function three times
    return 0;
}