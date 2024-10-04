#include<iostream>
using namespace std;

// Sum of Array From Start to Middle

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size;
    int mid = start + (end - start)/2;
    int sum = 0;
    for(int i = 0; i<=mid; i++){
        sum+=arr[i];
    }
    cout<<"Sum of Array From Start to Mid "<<sum<<endl;

    return 0;
}