#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

/*Write a program to find the sum of all even elements present in an array.*/

int main(){
    int arr[] = {1,4,6,3,10};
    int size = sizeof(arr)/sizeof(int);
    int sum=0;
    for(int i = 0; i<size; i++){
        if(arr[i]%2==0){
            sum+=arr[i];
        }
    }
    if(sum == 0){
    cout<<"Sorry There is no even number to be sum ";
    }else{
        cout<<"Sum is "<<sum;
    }
    return 0;
}
