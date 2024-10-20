#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

/*Write a program to print even numbers present in an array in reverse order*/

int main(){
    int arr[] = {1,4,6,3,10};
    int size = sizeof(arr)/sizeof(int);
    int j = 0;
    for(int i = 0; i<size; i++){
        if(arr[i]%2==0){
            arr[j] = arr[i];
            j++;
        }
    }
    for(int i = j-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }

    return 0;
}