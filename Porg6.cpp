#include<iostream>
using namespace std;

// Get ith Bit in Number
int getIthBit(int num, int i)
{
    int bitMask = 1<<i;
    if(!(num&bitMask))
    {
        return 0;
    }else {
        return 1;
    }
}

int main()
{
    cout << getIthBit(6,2);
    return 0;
}