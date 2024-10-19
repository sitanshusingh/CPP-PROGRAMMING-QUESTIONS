#include<iostream>
using namespace std;

// Product of Aray Element From Middle Index to end

int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size,mult=1;
    int mid = start + (end - start)/2;
    
    for(int i = mid; i<end; i++){
        mult*=arr[i];
    }
    cout<<"Product of Array is "<<mult;
    return 0;
}