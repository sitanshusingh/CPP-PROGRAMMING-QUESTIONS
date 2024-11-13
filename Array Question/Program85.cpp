#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Taking input from user and print the value using row traversal */

int main(){

    int n=3,m=4; // n is row size and m is column    
    int arr[n][m];

    //Taking input from user 
    for(int i=0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}