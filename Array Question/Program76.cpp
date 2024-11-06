#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of integers, find and display the minimum product of pairs of elements in array.*/


int main(){

    // int arr[] = {1,3,5,2,4};
    // int size = sizeof(arr)/sizeof(int);
    int n;
    cout << "Enter number of elments ";
    cin >> n;
    int arr[n];
    cout << "Enter elment of array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min_value = INT_MAX;
    int min_sec_value = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i] < min_value){
            min_sec_value = min_value;
            min_value = arr[i];
        }
        else if(arr[i] < min_sec_value && arr[i] != min_value){
            min_sec_value = arr[i];
        }
    }
    cout<<"Pairs of minimum value product is "<<min_value*min_sec_value;

    return 0;
}