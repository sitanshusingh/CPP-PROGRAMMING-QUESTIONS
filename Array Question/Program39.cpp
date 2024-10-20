#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

/*Write a program to print the elements which are divisible by 2 and 3 in an array*/

void divisibleElement(int *arr, int size){
    for(int i = 0; i<size; i++){
        if(arr[i]%2==0 && arr[i]%3==0){
            cout<<arr[i];
        }
    }
}

int main(){
    int arr[] = {1,4,6,3,10};
    int size = sizeof(arr)/sizeof(int);
    divisibleElement(arr,size);
    return 0;
}
