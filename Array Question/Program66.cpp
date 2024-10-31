#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an Array of Integes, separate and display the Positive and Negative elements present in array.*/

int main(){

    int arr[] = {-2,3,-5,7,-8};
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0; i<size; i++){
        if(arr[i] > 0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    for(int i = 0; i<size; i++){
         if(arr[i] < 0){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}