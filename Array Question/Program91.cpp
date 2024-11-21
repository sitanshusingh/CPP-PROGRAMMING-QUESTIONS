#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;


void strongSignalAvg(int arr[], int n){
    float total_value = n-1;
    int total_sum_value = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] != -1){
            total_sum_value+=arr[i];
        }
    }
    cout<<total_sum_value<<endl;
    float avg = total_sum_value/total_value;
    cout<<"The Strong Single value is "<<avg;
}



int main(){

    int N,size = 0;
    cout<<"Enter signal Component ";
    cin>>N;
    if(N%5==0){
        size = N;
    }else{
        cout<<"Enter a Value Which is multiple of 5 ";
        return 0;
    }
    int arr[size];
    cout<<"Enter the Elment of Array ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    int min_value_indx = INT_MAX;
    for(int i = 0; i<size; i++){
        if(arr[i]<min_value_indx){
            min_value_indx = i;
        }
    }
    cout<<"Min Value is Omitted "<<arr[min_value_indx]<<endl;
    arr[min_value_indx] = -1;
    strongSignalAvg(arr,size);

    return 0;

}