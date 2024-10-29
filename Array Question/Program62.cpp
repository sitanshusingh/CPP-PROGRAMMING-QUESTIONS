#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of integers, replace all elements divisible by k with k.*/

int main()
{

    int arr[] = {10, 5, 20, 7, 12};
    int size = sizeof(arr) / sizeof(int);
    int k;
    cout << "Enter value of K ";
    cin >> k;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % k == 0)
        {
            arr[i] = k;
        }
        cout << arr[i] << " ";
    }
    return 0;
}