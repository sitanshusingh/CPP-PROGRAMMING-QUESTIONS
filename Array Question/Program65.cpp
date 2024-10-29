#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an Array of Integes, separate and display the even and odd elements present in array.*/

int main(){

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    
    // Display even numbers
    cout << "Even numbers: ";
    for(int i = 0; i<size; i++){
        if(arr[i]%2 == 0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    // Display odd numbers
    cout << "Odd numbers: ";
    for(int i = 0; i<size; i++){
         if(arr[i]%2 != 0){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}