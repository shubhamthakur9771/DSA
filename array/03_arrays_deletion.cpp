#include<iostream>
using namespace std;

int main(){
    cout<<"Please enter your size of array\n";
    int size;
     cin >>  size;
    int b [size] ;
     cout<<"please enter the corresponding elements of the array\n";
    
    for(int i=0;i<size;i++){
       cin>> b [i];
     } 
     cout<<"The data enered by you is\n";
    for(int i=0;i<size;i++){
     cout<<"a["<<i<<"]"<<"="<<b [i]<<"\n";
    }
    cout<<"Please enter the position where you want to delete your data\n";
    int pos;
    cin>>pos;
    cout<<"Your enterd position is "<<pos<<"\n";
    
    int old_data = b[pos-1];
    

    for(int j= pos-1;j<=size-1;j++){
        b[j]=b[j+1];
    }
    size--;
    
    cout<<"The final data after deleting your data is\n";
    for(int i=0;i<size;i++){
     cout<<"a["<<i<<"]"<<"="<<b [i]<<"\n";
    }
    cout<<"You deleted "<<old_data<<" from position "<<pos<<" and size of array after deleting the element is "<<size;
    return 0;
}