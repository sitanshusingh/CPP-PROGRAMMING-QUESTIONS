#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
// All 0's shift to the left side and 1's to the right side

int main(){
    // vector<int> arr{0,1,0,0,0,0,1,1,1,0,0,1};

    int arr[10] = {0,0,0,0,1,1,1,1,0,0}; 
    int start = 0, i=0;
    int end = 9;
    while (i!=end)
    {
        if(arr[i]==0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        if(arr[i]==1){
            swap(arr[end],arr[i]);
            end--;
        }
    }
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
