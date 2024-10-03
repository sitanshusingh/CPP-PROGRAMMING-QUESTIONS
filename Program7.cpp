#include<iostream>
using namespace std;

// Write a program to print even numbers present in array.

int main(){
    int arr[] = {1,4,6,3,10};
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0; i<size; i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
