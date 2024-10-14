#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

// Write a program to swap all the even index elements with odd index elements...

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0; i<size; i=i+2){
        if (arr[i]%2!=0 && arr[i+1]%2==0){
            swap(arr[i],arr[i+1]);
        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}