#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of Integer. find and display the second-smallest odd number present in the array*/

int secondSmallestOdd(int arr[], int n)
{
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;
   
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0) // Check if number is odd
        { 
            if (arr[i] < smallest)
            {
                secondSmallest = smallest;
                smallest = arr[i];
            }
            else if (arr[i] < secondSmallest && arr[i] != smallest)
            {
                secondSmallest = arr[i];
            }
        }
    }

    if (secondSmallest == INT_MAX)
    {
        return -1; // No second smallest odd number found
    }

    return secondSmallest;
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

    int result = secondSmallestOdd(arr, n);

    if (result != -1)
    {
        cout << "The second-smallest odd number is: " << result << endl;
    }
    else
    {
        cout << "There are less than two odd numbers in the array." << endl;
    }

    return 0;
}
