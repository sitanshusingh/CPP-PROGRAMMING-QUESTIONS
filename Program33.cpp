#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

// Write a program to print number present in odd index of an array.

int main(){

    int arr[] = {1,4,3,2,10};
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0; i<size; i++){
        if(i%2!=0){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}