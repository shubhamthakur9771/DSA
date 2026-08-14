#include<iostream>
using namespace std;

int main(){
    cout<<"Please enter your size of array\n";
    int size;
     cin >>  size;
    int b [size+10] ;
     cout<<"please enter the corresponding elements of the array\n";
    
    for(int i=0;i<size;i++){
       cin>> b [i];
     } 
     cout<<"The data enered by you is\n";
    for(int i=0;i<size;i++){
     cout<<"a["<<i<<"]"<<"="<<b [i]<<"\n";
    }
    cout<<"Please enter the position where you want to insert your data\n";
    int pos;
    cin>>pos;
    cout<<"Your enterd position is "<<pos<<"\n";
    for(int j= size-1;j>=pos-1;j--){
        b[j+1]=b[j];
    }
    cout<<"Please enter your data you want to insert at position "<<pos<<"\n";
    int num;
    cin>>num;
    cout<<"Your enterd data is "<<num<<"\n";
    int old_data = b[pos-1];
    b[pos-1]=num;
    size++;
    cout<<"The final data after including your data is\n";
    for(int i=0;i<size;i++){
     cout<<"a["<<i<<"]"<<"="<<b [i]<<"\n";
    }
    cout<<"You replaced "<<old_data<<" by "<<num;
    return 0;
}