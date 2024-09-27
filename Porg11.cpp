#include<iostream>
using namespace std;


// Largest Number of Array
int largestEl(int arr[], int size)
{
    int max = arr[0];
    for(int i = 0; i<size; i++){
            if(arr[i]>max){
                max = arr[i];
            }
    }
    return max;
}
int main(){

    int arr[] = {1,5,7,2};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Larges Element of Array is "<<largestEl(arr,size);
    return 0;

}