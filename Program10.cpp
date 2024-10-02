#include<iostream>
using namespace std;


// Absolute Sum Array(all negetive number become positve then add all array number)

int main(){
    
    int arr[] = {1,-4,-6,3,10,-20};

    int size = sizeof(arr)/sizeof(int);
    int sum = 0;
    for(int i = 0; i<size; i++){
       if(arr[i] < 0)
       {
        arr[i] = -arr[i];
       }
        sum+=arr[i];
    }
    cout<<"Sum is "<<sum;

    
    return 0;
}
