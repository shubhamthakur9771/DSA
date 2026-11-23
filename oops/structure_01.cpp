#include<iostream>
using namespace std;
struct book{
    int bookid;
    char title[20];
    float price;
};

int main(){
  book b1 = {100, "c++ by me", 450.0};
  book b2 , b3, b4 , b5, b6;
  b2.bookid=101;
  strcpy(b2.title," c++ made easy");
  b2.price= 300.0;
  b3= b2;
  //cout<< b1;
  cout<<"enter bookid , title and price of book";
  cin>>b4.bookid >>b4.title>>b4.price;




    return 0;
}