#include<iostream>
using namespace std;

// Product of Array From start to Middle

void productArray(int arr[], int size){
        int start = 0;
        int end = size;
        int mid = start + (end - start)/2;
        int mult=1;
        for(int i=start; i<mid; i++){
            mult*=arr[i];
        }
        cout<<"Product of array from Start to Middle "<<mult;
}

int main(){

    int arr[] = {10,20,30,40,50,60,70};
    int size = sizeof(arr)/sizeof(int);
    productArray(arr,size);

    return 0;

}
