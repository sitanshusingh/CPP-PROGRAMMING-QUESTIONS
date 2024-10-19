#include<iostream>
using namespace std;

// Array Elements Sum

int main(){

    int arr[] = {1,4,6,3,10};
    int sum = 0;
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0;i<size; i++){
        sum+=arr[i];
    }
    cout<<"Sum of array is "<<sum;
    return 0;
}
