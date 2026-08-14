// function overloading of insertion and exertion operator using freind function.

#include<iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    };
    void showdata()
    {
        cout << a << "\n"
             << b << "\n";
    }
    friend ostream& operator<<(ostream& , complex);
        friend istream& operator>>(istream& , complex&);

};
ostream& operator<<(ostream &dout , complex c)
{
    cout<<"\na is "<<c.a<<" b is "<<c.b;
   
    return (dout);
}
istream& operator>>(istream &din , complex &c)
{
   cin>>c.a>>c.b;   
    return (din);
}
int main(){
    complex c1;
    cout<<"enter a complex number\n";
    cin>>c1;
    cout<<"you entred\n";
    cout<<c1;

    return 0;
}