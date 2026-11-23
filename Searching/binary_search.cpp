#include<iostream>
using namespace std;
//int index , size;
int binarysearch(int arr[], int size, int key){
int start =0;
int  end = size-1;
int mid = start + (end-start)/2;
while (start<=end)
{
    if(arr[mid]==key){
        return mid;
    }
    if(key > arr[mid]){
        start = mid +1;

    }
     else{
        end = mid -1;

    }
    mid = (start+end)/2;
    /* code */
}
return -1;


}


int main(){
    int even[9] = {2,5,7,9,13,15,23,34,56 };
    int odd [9] = {0,5,7,8,10,13,16,20,25};

    int evenindex = binarysearch(even,9,13);
    cout<< "index of 13 is " << evenindex<<endl;
    int oddindex = binarysearch(odd,9,13);
    cout<< "index of 13 is " << oddindex<<endl;

    return 0;
}