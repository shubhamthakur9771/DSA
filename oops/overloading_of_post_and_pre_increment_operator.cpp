#include<iostream>
using namespace std;

class integer
{
    private:
    int a;
    public:
    void setdata(int x ){
        a=x;
    };
    void showdata(){
        cout<<"\n"<<"a is"<<a<<"\n";
    }
    integer operator++() // pre increment
    {
        integer temp;
        temp.a=++a;
        return(temp);
    };
     integer operator++(int) // post increment
     {
        integer temp;
        temp.a=a++;
        return(temp);
    }
};
int main(){
    integer i1,i2;
    i1.setdata(3);
    i1.showdata();
    i2=i1++;        // i2=i1.operator++()
    i1.showdata();
    i2.showdata();
    

    return 0;
}