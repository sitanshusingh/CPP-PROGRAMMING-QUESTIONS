#include<iostream>
using namespace std;

// Printing Element of Array From Middle to End

void midEnd(int* arr,int size){
    int start = 0;
    int end = size;
    int mid = start + (end-start)/2;
    cout<<mid<<endl;
    cout<<"Printing Array from Mid to End:- "<<endl;
    for(int i = mid; i<end; i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[] = {7,8,5,3,2,1};
    int size = sizeof(arr)/sizeof(int);
    midEnd(arr,size);
    return 0;
}
