#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Print all pairs of numbers from a given array where the first value is strictly smaller than the second value.*/

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
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
    return 0;
}