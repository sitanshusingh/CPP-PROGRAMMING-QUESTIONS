#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Search for a key in row wise & col wise sorted matrix using Binary Search*/

int binarySearch(int arr[][4], int n, int m,int target){
    // int start = 0;
    // int end = m-1;
    // int mid = start + (end - start)/2;
    for(int i=0; i<n; i++){
        int start = 0;
        int end = m-1;
        int mid = start + (end - start)/2;
        while(start<=end){
            if(target==arr[i][mid]){
                return 1;
            }else if(target>arr[i][mid]){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
    }

    return -1;
}




int main(){

    int arr[4][4] = {{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};
    int target = 32;
    int result = binarySearch(arr,4,4,target);
    if(result == -1){
        cout<<"Not";
    }else{
        cout<<"Yes "<<result;
    }
    return 0;
}