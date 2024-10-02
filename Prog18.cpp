#include<iostream>
using namespace std;

// Print The Element in a Array from Start to Middle
int main(){
    int arr[] = {7,2,1,3,4};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size-1;
    int mid = start + (end - start) / 2;
    for(int i=0;i<=mid; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}