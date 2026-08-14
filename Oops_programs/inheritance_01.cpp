// inheritance and their types
// memory is not utilized for creationg class , once the object is created from that class then memory is allocated to that oject block

#include<iostream>
using namespace std;
// single inheritance

class A
{
    private:
    int a;
};
class B:public A
{
private:
int b;
};

// multilevel inheritance

class C
{
    private:
    int c;
};
class D:public C
{
private:
int d;
};

class E:public D
{
private:
int e;
};

// multiple inheritance

class A1
{
    private:
    int f;
};
class A2
{
    private:
    int g;
};
class F:public A1, public A2
{
private: int g;
};

// hirearchical inheritance

class H
{
    private:
    int a;
};
class B1:public H
{
    private:
    int a;
};
class B2 : public H
{
    private:
    int a;
};




int main(){
    
    return 0;
}