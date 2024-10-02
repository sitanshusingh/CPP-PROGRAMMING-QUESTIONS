#include<iostream>
using namespace std;

// Print Odd Index Array Element
int main(){
    int arr[] = {7,8};
    int size = sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        if(i%2!=0){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}
