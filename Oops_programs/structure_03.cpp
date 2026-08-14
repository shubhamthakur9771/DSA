#include <iostream>
using namespace std;

struct book
{
    int bookid;
    char title[20];
    float price;

book input()
{

    cout << "enter bookid , title and price of book";
    cin >> bookid >> title >> price;

}
void display (book b)
{
    cout<<"\n"<<bookid<<" "<<title<<" "<<price;
}


};
void display (book);
book input();
int main()
{
    book b1;
   // b1.input;
   // b1.display;

    display(b1);
    return 0;
}
// display (b5);
