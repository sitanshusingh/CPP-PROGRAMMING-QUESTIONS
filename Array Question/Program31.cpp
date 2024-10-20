#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

/*Write a program to find the sum of elements which are divisible 
by 3 and 5 in an array.*/

int main(){

    int arr[] = {15,30,35,45};
    int size = sizeof(arr)/sizeof(int);
    int sum = 0;
    for(int i = 0; i<size; i++){
        if(arr[i]%3==0 && arr[i]%5==0){
            sum+=arr[i];
        }
    }
    cout<<"Sum is "<<sum;

    return 0;
}