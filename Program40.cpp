#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

/*The global of this task is to write a C++ program that find the index of a given value K 
in a given array. If k is not found in array, the program should print -1.*/


int main(){

    int arr[] = {5,9,2,8,3,7,2};
    int size = sizeof(arr)/sizeof(int);
    int num,ind_valu = -1;
    cout<<"Enter a number ";
    cin>>num;
    for(int i = 0; i<size; i++){
        if(arr[i]==num){
            ind_valu = i;
        }
    }
    if(ind_valu!=-1){
        cout<<"Index Value is "<<ind_valu;
    }else{
        cout<<"Index Value is "<<-1;
    }
    

    return 0;
}