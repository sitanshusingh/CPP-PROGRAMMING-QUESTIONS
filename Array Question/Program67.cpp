#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of Integers, find and display the second-largest element present in the array that is divisible by k.*/

int secondLargest(int *arr, int n){
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            secondLargest = largest; 
            largest = arr[i];
        }else if(secondLargest < arr[i] && arr[i] != largest){
                secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
    {
        return -1; // No second largest odd number found
    }

    return secondLargest;
}



int main(){
    int n,k;
    cout<<"Enter the number of elements.";
    cin>>n;

    int arr[n];
    cout<<"Enter the array ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of K:- ";
    cin>>k;
    int result = secondLargest(arr,n);
    if(result%k==0){
        cout<<"The second-largest element is divisible by k value ";
    }else{
        cout<<"Not Divisible";
    }

    return 0;
}