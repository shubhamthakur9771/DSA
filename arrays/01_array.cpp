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
    cout<<"Printing the address of given array using pointer method\n\n";
    // cout<<"The data enered by you is\n";
    // for(int i=0;i<size;i++){
    //  cout<<"a["<<i<<"]"<<"="<<i[b]<<"\n";
    // }
    // cout<<"The data enered by you is\n";
    // for(int i=0;i<size;i++){
    //  cout<<"a["<<i<<"]"<<"="<<*(b+i)<<"\n";
    // }
    cout<<"The address of each element of this array is\n";
    for(int i=0;i<size;i++){
        cout<<b+i<<"\n";
    }
    return 0;
}