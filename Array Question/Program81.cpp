#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array, the task is to cyclically rotate the array clockwise by one time*/

void rotateArray(int arr[], int n) {
    int temp = arr[n-1];
    int right = n-1;
    while(right != 0){
        arr[right] = arr[right-1];
        right--;
    }
    arr[0] = temp;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
         cin >> arr[i];
    }

    cout << "Original array: ";
    printArray(arr, n);

    rotateArray(arr, n);

    cout << "Rotated array: ";
    printArray(arr, n);

    return 0;
}





// int main(){
//     int arr[] = {2,3,4,5,1};
//     int size = sizeof(arr)/sizeof(int);
//     int temp = arr[size-1]; 
//     int right = size - 1;
//     while(right != 0){
//         arr[right] = arr[right-1];
//         right--;
//     }
//     arr[0] = temp;
    
//     for(int i = 0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }


//     return 0;
// }