#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of Integeers, replace all Even elements with -1*/

int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0; i<size; i++){
        if(arr[i]%2 == 0){
            arr[i] = -1;
        }
        cout<<arr[i]<<" ";
    }
   

    return 0;
}