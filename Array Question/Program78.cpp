#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of integers of size N, Find and display the minimum pair sum of th elements present in the array.*/


void minPairSum(int arr[], int n){
    int minSum = INT_MAX;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
        int sum = arr[i] + arr[j];
        minSum = min(minSum , sum);
    }
    }
    cout<<"Minimum Pair of sum is "<<minSum;
}

int main(){

    int size;
    cout<<"Enter the size of array ";
    cin>>size;
    int arr[size];
    cout<<"Enter the element of array "<<endl;
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    minPairSum(arr, size);
    return 0;
}