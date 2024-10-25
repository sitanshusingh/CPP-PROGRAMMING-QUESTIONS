#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*This program finds the minimum sum amoung all the pairs of elements in a given array of integers. Sorting is not allowed.*/

int main()
{
    int size, k;
    cout << "Enter a Size of  array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int minSum = INT_MAX;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] < minSum)
            {
                minSum = arr[i] + arr[j];
            }
        }
    }
    cout << "Min sum is " << minSum;

    return 0;
}