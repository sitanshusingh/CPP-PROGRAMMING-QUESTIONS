#include<iostream>
using namespace std;

// Print Even Index Array Element

int main(){
    int arr[] = {20,40,60};
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0; i<size; i++){
        if(i%2==0){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}