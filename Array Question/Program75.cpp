#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of Integer, find and display the largest Even element present in array*/

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
    int largestEven = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (arr[i] > largestEven)
            {
                largestEven = arr[i];
            }
        }
    }
    if (largestEven == INT_MIN)
    {
        cout << "There is no largest even number";
    }
    else
    {
        cout << "The largest even number is  "<<largestEven;
    }

    return 0;
}