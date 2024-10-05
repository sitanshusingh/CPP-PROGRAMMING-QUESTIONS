#include<iostream>
using namespace std;

// Sum of Array From Middle Index to End

int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size,sum=0;
    int mid = start + (end - start)/2;

    for(int i=mid; i<end; i++){
        sum+=arr[i];
    }
    cout<<"Sum is "<<sum;

    return 0;

}