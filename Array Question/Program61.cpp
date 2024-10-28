#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of integers, count the number of elements which are Greater then k and Odd*/

int main()
{

    int arr[] = {10, 5, 20, 7, 12};
    int size = sizeof(arr) / sizeof(int);
    int count = 0, k;
    cout << "Enter the vlaue of k ";
    cin >> k;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0 && arr[i] > k)
        {
            count++;
        }
    }
    cout << "Number of element Greater then K and Odd Number is " << count;
    return 0;
}