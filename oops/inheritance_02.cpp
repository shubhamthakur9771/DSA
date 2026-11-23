#include<iostream>
using namespace std;
class Array
{   
    private:
    int a[10];
    public:
    void insert (int index, int value)
    {
        {a[index]=value;}
    }
};
class STACK : public Array // change public to private because we don't ant to provide this serviece to STACK because it will violate the rules of stack implementation.
{
    int top;
    public:
    void push(int value)
    {
        insert (top , value);
    }
};


int main(){
    STACK s1;
    s1.push(34);
    s1.insert(4,76);// it will insert data directly at 4th position which is against the rule of stacks, so we need to inherit array class as
                    // as private but not as public.


    return 0;
}