#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;


/*Find the second largest number in a given array of integers.
Wherer second largest number must be different from first largest number*/


int main(){
    int arr[] = {1,4,6,3,10};
    int size = sizeof(arr)/sizeof(int);
    for(int i=0; i<size-1; i++){
        int minval = i;
        for(int j = i+1; j<size; j++){
            if(arr[j]>arr[minval]){
                minval = j;
            }
          
        }
          swap(arr[i],arr[minval]);
    }
    // for(int i = 0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }
    
      cout<<"Second Largest Number is "<<arr[1];

    return 0;
}