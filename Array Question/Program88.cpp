#include <iostream>
#include <algorithm>
using namespace std;
// Binary Search


int binarySearch(int arr[],int size,int target)
{
    int start = 0;
    int end = size - 1;
    int mid  = start +(end - start)/2;
    while(start<=end)
    {
        if(target == arr[mid])
        {
            return mid;
        }
        else if(target<arr[mid])
        {
            end = mid-1;
        }
        else{
            start = mid +1;
        }

        mid  = start +(end - start)/2;
    }
       
 return -1;
}

int main()
{
    int arr[] = {2,3,4,5,6,7,8};
    int size = 7;
    int target = 6;
    int ansIs = binarySearch(arr,size,target);
    if(ansIs == -1)
    {
        cout<<"Index No. is'nt founded "<<ansIs;
    }
    else
    {
        cout<<"Index No. is founded "<<ansIs;

    }
    return 0;

} 