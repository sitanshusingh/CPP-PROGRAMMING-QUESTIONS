#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of integer, find and display the second-largest odd number present in the array */

int secondLargestOdd(int arr[], int n)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
   
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0) // Check if number is odd
        { 
            if (arr[i] > largest)
            {
                secondLargest = largest;
                largest = arr[i];
            }
            else if (arr[i] > secondLargest && arr[i] != largest)
            {
                secondLargest = arr[i];
            }
        }
    }

    if (secondLargest == INT_MIN)
    {
        return -1; // No second smallest odd number found
    }

    return secondLargest;
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

    int result = secondLargestOdd(arr, n);

    if (result != -1)
    {
        cout << "The second-Largest odd number is: " << result << endl;
    }
    else
    {
        cout << "There are less than two odd numbers in the array." << endl;
    }

    return 0;
}
