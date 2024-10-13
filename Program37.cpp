#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

/*Write a program that finds the second smallest number in a given array 
of integers..*/

int main(){
    int arr[] = {5,9,2,8,3,7};
    int size = sizeof(arr)/sizeof(int);
    if(size >  2){
        for(int i = 0; i<size; i++){
            for(int j =  i+1; j<size; j++){
                if(arr[i]>arr[j]){
                    int tamp =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = tamp;    
                }
            }
        }
    }else{
        cout<<"there is no Second smallest number";
    }

    cout<<"Second Smallest Number is "<<arr[1];

    

    return 0;
}