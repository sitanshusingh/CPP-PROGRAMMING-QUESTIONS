#include<iostream>
#include <limits.h>
using namespace std;

/*Write a program to find the occurrence of the largest element in an array*/ 
int main(){

    int arr[] = {34,67,21,56,78,89,18};
    int size = sizeof(arr)/sizeof(int);
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(max<arr[i]){
            max =arr[i];
        }
    }
    cout<<"Max Number "<<max;

    return 0;
}