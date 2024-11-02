#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of Integer, find and display the second-smallest even number present in the array.*/


int secondSmallestEven(int arr[],int n){
        int secondSmallEven = INT_MAX;
        int smallestEven = INT_MAX;
         for(int i = 0; i<n; i++){
            if(arr[i]%2==0){
                if(arr[i] < smallestEven){
                    secondSmallEven = smallestEven;
                    smallestEven = arr[i];
                }else if(arr[i] < secondSmallEven && arr[i] != smallestEven){
                            secondSmallEven =  arr[i];
                }
            }
        }

    if (secondSmallEven == INT_MAX)
    {
        return -1; // No second smallest odd number found
    }

    return secondSmallEven;

}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = secondSmallestEven(arr, n);

    if (result != -1)
    {
        cout << "The second-smallest even number is: " << result << endl;
    }
    else
    {
        cout << "There are less than two odd numbers in the array." << endl;
    }

    return 0;
}