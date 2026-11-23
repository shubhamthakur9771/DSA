#include<iostream>
using namespace std;

int main(){
    
    cout<<"Please enter your number  of rows of 2D array\n";
    int row , column;
     cin >>  row;
    cout<<"Please enter your number  of columns of 2D array\n";
     cin >>  column;
    int b [row][column] ;
     cout<<"please enter the corresponding elements of your 2D array row wise beacuse it will be stored row wise\n";
    
    for(int i=0;i<row;i++){
    
    for(int j=0;j<column;j++){
       cin>> b [i][j];
     } 
    }
     cout<<"The data enered by you is\n";
    for(int i=0;i<row;i++){
    
    for(int j=0;j<column;j++){
    
     cout<<"a["<<i<<"]"<<"["<<j<<"]"<<"="<<b [i][j]<<"\n";
     } 
    }
    
    

    return 0;
}