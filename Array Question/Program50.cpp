#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of integers, find and print the kth largest Element in the array*/

int main(){
    // int arr[] = {1,2,3,4,5};
    int arr[] = {3,7,1,5,6,4,2};
    int size = sizeof(arr) / sizeof(int); 
    
    for(int i=0; i<size-1; i++){
    for(int j =i+1; j<size; j++)
        if(arr[i]<arr[j]){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    int k;
    cout<<"Enter Kth largest Element for array ";
    cin>>k;
    cout<<"Kth element is "<<arr[k-1];
    return 0;
}