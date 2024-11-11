#include <iostream>
using namespace std;

// find the first occurance of number using linera Search
int main()
{
    int arr[]={1,2,5,3,4,5,5};
    int size = 8;
    int traget;
    cin>>traget;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==traget)
        {
            cout<<"Index No. is "<<i<<" first occurance "<<traget;
            break;
        }
    }
    return 0;
}