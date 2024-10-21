#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;
/*Find the index of the smallest element in an array.*/

int main(){
    int min = INT_MAX;
    int min_inx = -1;
    // int arr[] = {10,7,15,4,8};
    int arr[] = {1,8,3,9};
    int size = sizeof(arr) / sizeof(int);
    for(int i = 0; i<size; i++){
        if(arr[i]<min)
        {
            min = arr[i];
            min_inx = i;

        }
    }
    cout<<"Smallest elemeny's Index is "<<min_inx;


    return 0;
}
