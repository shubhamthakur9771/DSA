// overloading unary operator
#include<iostream>
using namespace std;

class complex
{
    private:
    int a, b ;
    public :
    void setdata(int x,int y)
    {
         a=x ;  b = y;
    }
    void showdata(){
      
        cout<<"\n"<<a<<"\n"<<b<<"\n";
    }
    complex operator-(){
        complex temp;
        temp.a=-a;
        temp.b=-b;
        return(temp);
    }
    
};
int main(){
    complex c1,c2;
    c1.setdata(2,3);
     c2=c1.operator-(); // here it is unary function overloading so we need not pass an argument.
    c2.showdata();
    return 0;
}