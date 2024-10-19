#include<iostream>
using namespace std;

/*write a program that creates an to store float numbers and
prints all the float elements by taking inputs individually a loop*/

int main(){
    float arr[] = {2.4,4.7,6.1};
    int size = sizeof(arr)/sizeof(int);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<", ";
    }
    return 0;
}