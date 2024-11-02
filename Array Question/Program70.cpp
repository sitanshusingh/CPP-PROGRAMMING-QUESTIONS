#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of Integer, find and display the Smallest odd element present*/

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
    int smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            if (arr[i] < smallest)
            {
                smallest = arr[i];
            }
        }
    }
    if (smallest == INT_MAX)
    {
        cout << "There is no smallest odd number";
    }
    else
    {
        cout << "the smallest odd number is  "<<smallest;
    }

    return 0;
}