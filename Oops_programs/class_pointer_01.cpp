#include<iostream>
using namespace std;
class Box
{
    private:
    int l,b,h;
    public:
    void setDimension(int x, int y, int z)
    { l=x; b= y ; h= z; }
    void showDimension()
    {
        cout<<"\nl = "<<l<<" b = "<<b<<" h = "<<h;
    }
};









int main(){
    Box *p,smallBox;
    p=&smallBox;
    smallBox.setDimension(12,10,5);
    smallBox.showDimension();
    // calling using pointer
    cout<<"\n\n calling using pointer\n";
    p->setDimension(14,11,4);
    p->showDimension();
    return 0;
}