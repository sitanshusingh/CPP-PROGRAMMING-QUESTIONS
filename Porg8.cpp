#include<iostream>
using namespace std;

// Average of Array

int main(){
    int arr[] = {1,4,6,3,10};
    float avg = 0;
    int size = sizeof(arr)/sizeof(int);
    for(int i=0; i<size; i++){
        avg+=arr[i];
    }
    cout<<"Average of arrayy is "<<avg/size;
    return 0;
}