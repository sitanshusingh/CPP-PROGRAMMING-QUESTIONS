#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

/*Write a program to find the sum of positive elements and negative elements*/

void sumPositiveNegative(int *arr, int size){
    int positive = 0;
    int negative = 0;
    for(int i = 0; i<size; i++){
        if(arr[i]>0){
            positive+=arr[i];
        }
        if(arr[i]<0){
            negative+=arr[i];
        }
    }
    cout<<"Sum of Positive Number "<<positive<<endl;
    cout<<"Sum of Negative Number "<<negative;
}

int main(){
    int arr[] = {1,-4,-6,3,10,-20};
    int size = sizeof(arr)/sizeof(int);
    sumPositiveNegative(arr,size);
    return 0;
}
