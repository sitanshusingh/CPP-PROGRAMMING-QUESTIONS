#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of Integer, find and display the Smallest Even element present in the array*/

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
    int smallestEven = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (arr[i] < smallestEven)
            {
                smallestEven = arr[i];
            }
        }
    }
    if (smallestEven == INT_MAX)
    {
        cout << "There is no smallest even number";
    }
    else
    {
        cout << "The smallest even number is  "<<smallestEven;
    }

    return 0;
}