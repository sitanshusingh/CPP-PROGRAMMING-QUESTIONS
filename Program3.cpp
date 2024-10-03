#include<iostream>
using namespace std;

// square pattern program

int main(){
    int num;
    cout<<"Enter a number "<<endl;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
