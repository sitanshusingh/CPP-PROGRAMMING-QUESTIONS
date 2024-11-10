#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of Integer, find and display the largest Odd element present in the array*/

int main()
{

    int n, k;
    cout << "Enter number of elments ";
    cin >> n;
    int arr[n];
    cout << "Enter elment of array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int largestOdd = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            if (arr[i] > largestOdd)
            {
                largestOdd = arr[i];
            }
        }
    }
    if (largestOdd == INT_MIN)
    {
        cout << "There is no Largest odd number";
    }
    else
    {
        cout << "The largest odd number is  "<<largestOdd;
    }

    return 0;
}