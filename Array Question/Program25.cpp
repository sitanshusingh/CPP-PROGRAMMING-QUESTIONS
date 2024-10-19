#include <iostream>
#include <limits.h>
using namespace std;

/*Write a program to find the occurrence of the smallest element in an array*/ 

int main(){

    int arr[] = {34,67,21,56,78,89,18};
    int size = sizeof(arr)/sizeof(int);
    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(min>arr[i]){
            min =arr[i];
        }
    }
    cout<<"Min Number "<<min;

    return 0;
}