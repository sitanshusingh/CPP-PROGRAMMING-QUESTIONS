#include<iostream>
using namespace std;

/*write a program to print number present in even index of an array*/

int main(){
    int arr[] = {1,4,6,3,10};
    int size =sizeof(arr)/sizeof(int);

    for(int i = 0; i<size; i++){
        if(i%2 == 0){
            cout<<arr[i]<<" ";
        }
    }


    return 0;
}