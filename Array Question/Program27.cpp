#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

/*Write a program that finds the minimum sum among all the 
pairs of elements in a given array of integers without sorting*/


// Sorting Without using Shorting Function

int main(){
    int arr[] = {5,9,2,8,3,7};
     int size = sizeof(arr)/sizeof(int);
     
    for(int i = 0; i<size; i++){
        for(int j = i+1; j<size; j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int min_first, min_sec;
    min_first = size -1 ;
    min_sec = size -2 ;
    cout<<"Maximum Pairs of Sum "<<arr[min_first]+arr[min_sec];
     return 0;
}


int main(){
    int arr[] = {5,9,2,8,3,7};
     int size = sizeof(arr)/sizeof(int);

    sort(arr+size,arr); 
    int max_first, max_sec;
    max_first = size -1 ;
    max_sec = size -2 ;
    cout<<"Maximum Pairs of Sum "<<arr[max_first]+arr[max_sec];
     return 0;
}