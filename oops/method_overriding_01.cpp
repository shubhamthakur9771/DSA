#include<iostream>
using namespace std;
class A
{   public:
    void f1(){};
    void f2(){};
};
class B:public A
{
     void f1(){ } ;  // method overriding
    void f2(int x){ }; // method hiding
};


int main(){
    B obj;
    obj.f1();
    return 0;
}