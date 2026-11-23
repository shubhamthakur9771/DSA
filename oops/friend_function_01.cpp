#include<iostream>
using namespace std;
class complex{
    private : int a, b ;
    public :
    void setdata(int x , int y)
    {
        a=x; b=y;

    }
    void showdata()
    {
        cout<<"n"<<"a is "<<a<<"\n"<<"b is"<<b<<"\n";
    };
    friend void fun(complex);
};
void fun(complex c){
    cout<<"sum is "<<c.a +c.b;
}
int main(){
    complex c1,c2,c3;
    c1.setdata(5,6);
    fun(c1);
    return 0;
}