#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Question:- Count the number of occurrences of the largest element in an ascending sorted array*/

/*Solution:- In this questions first we have to find largest element using 1st loop then we have used second
loop for count the largest number which was found and this algorithm is working for both sorting and unsorting*/

int largestElement(int *arr, int size)
{

    int smallest = INT_MIN;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > smallest)
        {
            smallest = arr[i];
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == smallest)
        {
            count++;
        }
    }

    return count == 0 ? -1 : count;
}

int main()
{

    int arr[] = {1, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 6};
    // int arr[] = {1,5,3,6,3,6,2,6,8,9,3,2,7,9,9};
    int size = sizeof(arr) / sizeof(int);
    int result = largestElement(arr, size);
    if (result != -1)
    {
        cout << "Number of largest occurrences is " << result;
    }
    else
    {
        cout << "No found largest occurrences number ";
    }

    return 0;
}