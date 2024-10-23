#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of integers, Count the number of elments which are lesser then k and prime.*/

bool isPrime(int num) {
    if(num <= 1) 
     return false;
    for(int i = 2; i*i <= num; i++){
        if(num % i == 0)
            return false;
    }
    return true;
}

int countPrimeNumbers(int *arr, int size, int k){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] < k && isPrime(arr[i])){
            count++;
        }
    }
    return count;
}

int main(){

    int size,k;
    cout<<"Enter a Size of  array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements: ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Enter the Value of K: ";
    cin>>k;
    
    int primeCount = countPrimeNumbers(arr,size,k);
    cout<<"Number of Prime numbers lesser than "<< k <<": "<<primeCount<<endl;
    return 0;
}