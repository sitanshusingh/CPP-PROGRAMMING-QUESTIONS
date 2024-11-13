#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Print one by one Element from 2'd Array*/


int main(){

    int marks[3][3] = {{55,63,77}, //2d array is created with 3 row and 3 coloumn
                    {85,74,89},
                    {63,72,65}};
    
    /*How to access 2d array using indexing value*/
    cout<<marks[0][0]<<endl;    // RowNo. 0 and ColumnNo. 0    
    cout<<marks[0][1]<<endl;    // RowNo. 0 and ColumnNo. 1
    cout<<marks[0][2]<<endl;    // RowNo. 0 and ColumnNo. 2
    cout<<marks[1][0]<<endl;    // RowNo. 1 and ColumnNo. 0
    cout<<marks[1][1]<<endl;    // RowNo. 1 and ColumnNo. 1
    cout<<marks[1][2]<<endl;    // RowNo. 1 and ColumnNo. 2
    cout<<marks[2][0]<<endl;    // RowNo. 2 and ColumnNo. 0
    cout<<marks[2][1]<<endl;    // RowNo. 2 and ColumnNo. 1
    cout<<marks[2][2]<<endl;    // RowNo. 2 and ColumnNo. 2

    
    return 0;
}