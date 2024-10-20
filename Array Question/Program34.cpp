#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

/*Write s program to print odd numbers present in is_array
in reverse order*/

//Type:-1 Creating Extra array to Store odd Number
int main()
{
    int arr[] = {1, 4, 6, 3, 10};
    int size = sizeof(arr) / sizeof(int);
    int j = 0;
    int arr2[j];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            arr2[j] = arr[i];
            j++;
        }
    }
    if (j >= 1)
    {
        for (int i = j - 1; i >= 0; i--)
        {
            cout << arr2[i] << " ";
        }
    }
    else
    {
        cout << "There is not Odd number";
    }

    return 0;
}


//Type:-2  Not Creating Extra array to Store odd Number
int main()
{
    int arr[] = {23, 43, 55, 22, 26, 99, 54, 56};
    int size = sizeof(arr) / sizeof(int);
    int j = 0;
    // int arr2[j];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            arr[j] = arr[i];
            j++; // last loop j will be incresed by 1;
        }
    }
    if (j >= 1)
    {
        for (int i = j - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        cout << "There is not Odd number";
    }

    return 0;
}