#include <iostream>
using namespace std;

// Multiple of 5

int main(){
    int num;
    cout<<"Enter a Number:- ";
    cin>>num;
    if(num%5==0){
        cout<<num<<" Multiple of 5";
    }
    else{
        cout<<num<< " Not Multiple of 5";
    }
    return 0;
}