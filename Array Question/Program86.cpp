#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;


//Find The Sum of Diagonal and array Value should not be repeated

int main()
{
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    int n = 4, m=4;
    int sum = 0;

    //Method 1
    // for(int i = 0; i < n; i++){
    //   for(int j = 0; j < m; j++ )
    //   {
    //     if(i==j){
    //         sum+=mat[i][j];
    //     }else if(j == m-1-i){
    //         sum+=mat[i][j];
    //     }
    //   }
    // }

    // Method 2
    for(int i = 0; i<n; i++){
        sum+= mat[i][i];
        if(i != n-i-1){
            sum+= mat[i][n-i-1];
        }
    }
    cout<<"Sum of Diagonal:-  "<<sum;
    return 0;
}