#include <iostream>
#include <vector>

using namespace std;

// find the last occurance of number using Binary Search
 int lastOccurence(vector<int> v,int target)
 {
    int start=0;
    int end = v.size()-1;
    int ans = -1;
    int mid = (start+end)/2;
    while(start<=end)
    {
        if(v[mid]==target)
        {
            ans = mid;
            start = mid+1;
        }
        else if(v[mid]<target)
        {
            start = mid+1;
        }
        else if(v[mid]>target)
        {
             end = mid -1;
        }

        mid = (start+end)/2;
    }
    return ans;
 }

 int main()
 {
    vector<int> v{1,2,3,3,3,3,3,3,4,4,4,4};  
    int target = 3;
    int indexOfLastOcc = lastOccurence(v, target);
    cout<<indexOfLastOcc+1;

    return 0;

 }