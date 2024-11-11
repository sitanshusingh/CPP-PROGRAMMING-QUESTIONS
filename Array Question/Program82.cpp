#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Gibe an array consisting of only 0s, 1s, and 2s. the task is to sort the arrat, i.e. put all 0s first, then all 1s and all 2s in last.*/

void sort012(int arr[], int size){
    int c0 = 0, c1 = 0, c2 = 0;
    for(int i = 0; i<size; i++){
        if(arr[i] == 0){
            c0+=1;
        }else if(arr[i] == 1){
            c1+=1;
        }else{
            c2+=1;
        }
    }
    int ind = 0;
    for(int i = 0; i < c0; i++){
        arr[ind++] = 0;
    }
    for(int i = 0; i < c1; i++){
        arr[ind++] = 1;
    }
    for(int i = 0; i < c2; i++){
        arr[ind++] = 2;
    }


}


int main(){

    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    int temp,i=0;
    cout<<"Enter element of array ";
    while(i<n){
        cin>>temp;
        if(temp==0 || temp==1 || temp==2){
            arr[i] = temp;
            i++;
        }else{
            cout<<"Enter value only 0,1,2 "<<endl;
        }
    }
    sort012(arr,n);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}