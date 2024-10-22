#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of integers, find the average value of the array excluding the largestt and smallest number.*/


int main(){

    // int arr[] = {1,2,3,4,5};
    // int arr[] = {3,7,1,5,6,4,2};
    int arr[] = {65,34,21,45,76,23,54};
    int size = sizeof(arr) / sizeof(int); 
    int min = INT_MAX, max = INT_MIN ,minInx,maxInx;
    for(int i = 0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
            minInx = i;
        }
        if(arr[i] > max){
            max = arr[i];
            maxInx = i;
        }
    }
    arr[minInx] = -1;
    arr[maxInx] = -1;
    // cout<<"Max "<<maxInx<<endl;
    // cout<<"Min "<<minInx<<endl;
    float average = 0,sum=0;
    for(int i = 0; i<size; i++){
        // cout<<arr[i]<<" ";
        if(arr[i]!=-1){
            sum+=arr[i];
        }
    }
    // cout<<sum;
    if(sum == 0){
        cout<<"Array is empty ";
    }else{
        average = sum/(size-2);
        cout<<"Average number is "<<average;
    }


    return 0;
}