#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;



// Above is the standard representation of a chessboard.

// This could be imagined as a 2D cartesian plane, with the x axis being represented by the alphabets and y axis by the numbers.

// Given coordinates in the form of string, print if that cell is white or black.

// Input Format
// First line contains a string s.

// Output Format
// White or Black.

// Constraints
// |s|=2

// Sample Testcase 0
// Testcase Input
// a1
// Testcase Output
// Black
// Explanation
// We can clearly see a1 is black in the diagram.
// Sample Testcase 1
// Testcase Input
// b2 
// Testcase Output
// Black



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char ch;
    int a;
    cin>>ch;
    if(ch >= 'a' && ch <= 'z'){
        cin>>a;
        if(int(ch)%2==0 && a%2==0 || int(ch)%2 != 0 && a%2 != 0){
            cout<<"Black";
        }else{
            cout<<"White";
        }
    }else{
        return 0;
    }
    return 0;
}