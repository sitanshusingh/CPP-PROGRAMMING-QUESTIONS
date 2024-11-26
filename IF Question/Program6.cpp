#include <iostream>
using namespace std;

// Multiple of 10

int main(){
    int num;
    cout<<"Enter a Number:- ";
    cin>>num;
    if(num%10==0){
        cout<<num<<" Multiple of 10";
    }
    else{
        cout<<num<< " Not Multiple of 10";
    }
    return 0;
}
