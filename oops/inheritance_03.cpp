#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A(int k)
    {a=k;
    cout<<a;}
};
class B : public A
{   
    int b;
    public:
    B(int x, int y):A(x)
    { b=y;
    cout<<b;}
};

// here when we pass 2 and 3 as argument to obj B it will call
// constructor of b then it will call constructor of A using parameter
// x as 2, then it will run constructor of A and then it will run constructor of b

int main(){
    B obj(2,3);
    return 0;
}