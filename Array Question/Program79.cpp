#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of integers of size N, Find and display the maximum pair sum of th elements present in the array.*/


void maxPairSum(int arr[], int n){
    int maxSum = INT_MIN;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
        int sum = arr[i] + arr[j];
        maxSum = max(maxSum , sum);
        }
    }
    cout<<"Minimum Pair of sum is "<<maxSum;
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
    maxPairSum(arr, size);
    return 0;
}
