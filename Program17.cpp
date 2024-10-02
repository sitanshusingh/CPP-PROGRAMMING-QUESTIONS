#include<iostream>
using namespace std;

// Pr1int Odd Number in Array
int main(){
      int arr[] = {2,1,6};
      int size = sizeof(arr)/sizeof(int);
      for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
            cout<<arr[i];
        }
      }  

    return 0;
}
