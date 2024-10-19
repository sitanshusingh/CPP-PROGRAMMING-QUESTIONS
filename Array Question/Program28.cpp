#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

/*Write a program to print numbers present in each index in an array in reverse*/

// Type:-1 where we haven't used any bult-in function

int main(){

    int size;
    cout<<"Enter Size of array ";
    cin>>size;
    int arr[size];
    int temp[size];
   cout<<"Enter array element "<<endl;
   for(int i = 0; i<size; i++){
    cin>>arr[i];
   } 

    for(int i = 0; i<size; i++){
        temp[i] = arr[size-1-i];
    }
    for(int i = 0; i<size; i++){
        arr[i] = temp[i];
    }
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Type:-2 where we haven used swap built-in function

int main(){
    int size;
    cout<<"Enter Size of array ";
    cin>>size;
    int arr[size];
   cout<<"Enter array element "<<endl;
   for(int i = 0; i<size; i++){
    cin>>arr[i];
   } 

   int left = 0, right = size -1;
   while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
   }
  for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}

// Type:-3

void reverseNumber(int arr[], int size){
    int left = 0, right = size -1;
   while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
   }
  for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size;
    cout<<"Enter Size of array ";
    cin>>size;
    int arr[size];
   cout<<"Enter array element "<<endl;
   for(int i = 0; i<size; i++){
    cin>>arr[i];
   } 
    reverseNumber(arr,size);
    return 0;
}

// Type: 4
int main(){
    int size;
    cout<<"Enter Size of array ";
    cin>>size;
    int arr[size];
   cout<<"Enter array element "<<endl;
   for(int i = 0; i<size; i++){
    cin>>arr[i];
   } 
   int left = 0, right = size -1,temp = 0;
   while(left<right){
        temp = arr[right];
        arr[right] = arr[left];
        arr[left] = temp;
        left++;
        right--;
   }
   for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}