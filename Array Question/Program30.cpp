#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

// Write a Program to find sum of all odd elements Present in an array.

int main(){
    int arr[] = {1,4,3,2,10};
    int size = sizeof(arr)/sizeof(int);
    int sum = 0;
     for(int i = 0; i<size; i++){
        if(i%2!=0){
            sum+=arr[i];
        }
    }
    cout<<"Odd element sum is "<<sum;
    return 0;
}