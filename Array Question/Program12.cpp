#include<iostream>
using namespace std;

// Print Product of Element in an array
int main(){
    int arr[] = {0,1,2};
    int size = sizeof(arr)/sizeof(int);
    int mult = 1;
    for(int i=0;i<size;i++){
        mult*=arr[i];
    }
    cout<<"Product is "<<mult;
    return 0;
}
