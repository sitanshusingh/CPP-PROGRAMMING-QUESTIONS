#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of Integer, find and display the largest element present in the array that is divisible by k*/

int main(){

    int n,k;
    cout<<"Enter number of elments ";
    cin>>n;
    int arr[n];
    cout<<"Enter elment of array ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int largest = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout<<"Enter a value of k "<<endl;
    cin>>k;
    if(largest%k==0){
        cout<<"Largest value is divisible by k ";
    }else{
        cout<<"Not divisible ";
    }

    return 0;
}