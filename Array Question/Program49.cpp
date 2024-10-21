#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Find the missing element in an unsorted array without using sorting*/

int main(){
    int arr[] = {1,2,3,6,8,7,4,5,10,11};
    int size = sizeof(arr) / sizeof(int); 
    int expectedSum = (size + 1) * (size + 2)/2;
    int actualSum = 0;
    for(int i= 0;i<size; i++){
        actualSum+=arr[i];
    }
    cout<<actualSum<<endl;
    cout<<"Missiong number is "<<expectedSum-actualSum;
    return 0;
}