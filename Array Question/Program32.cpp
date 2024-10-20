#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

/*Write a program to print negative element, even element
and odd elements present in array sepparately.*/

int main(){

    int arr[] = {1,-4,-6,3,10,-20};
    int size = sizeof(arr)/sizeof(int);
    int sum = 0;
    for(int i = 0; i<size; i++){
        if( arr[i]%2==0 || arr[i]%2!=0){
            cout<<arr[i]<<" ";
        }
    }
    

    return 0;
}