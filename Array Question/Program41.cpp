#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

/*Write a program to find the even elements in an array
and replace all even elements with '0'*/

void RemoveEven(int *arr, int size){
    for(int i=0; i<size; i++){
        if(arr[i]%2==0){
            arr[i] = 0;
        }
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    RemoveEven(arr,size);

    return 0;
}