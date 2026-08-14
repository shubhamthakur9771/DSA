#include<iostream>
using namespace std;
class A
{
    public:
    void fun()
    {  cout<<"fun\n";   }
    void foo()
    {  cout<<"foo\n"  ;   }
};
class B {
friend class A; // declaration of  ALL the member function of class A as friend function of class B

friend void A ::fun(); // declaration of member function of class A as friend function of class B
friend void A :: foo();
};


int main(){
    
    return 0;
}