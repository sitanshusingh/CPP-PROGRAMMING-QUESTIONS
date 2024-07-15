#include <iostream>
using namespace std;

// Sorting all -ve value swap to the left side

int main()
{
    int arr[12] = {1, 2, -3, 4, -1, -2, -7, -4, 8, 9, -11, -12};
    int size = 12;
    int temp = 0;

    for (int i = 0; i < size ; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // sort(arr.begin(),arr.end()); Sorting function
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}