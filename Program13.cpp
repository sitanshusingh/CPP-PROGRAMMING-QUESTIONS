#include<iostream>
using namespace std;

// Print Array Element

int main(){
    int arr[] = {4,5,2,6,7};
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
