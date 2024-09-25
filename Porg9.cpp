#include<iostream>
using namespace std;

// Smallest Element in an Array
int main(){
    int arr[] = {1,5,7,3,2};
    int min = arr[0];
    int size = sizeof(arr)/sizeof(int);
    
    for(int i = 0; i<size; i++){
        
        if(min > arr[i+1]){
            min = arr[i+1];
        }
    }
    cout<<"Min Number is "<<min;
    return 0;
}