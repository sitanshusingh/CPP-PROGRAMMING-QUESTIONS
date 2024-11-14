#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

// Print Subarray
void printSubarray(int *arr, int size)
{

    for (int start = 0; start <= size; start++)
    {
        for (int j = start; j < size; j++)
        {
            // cout<<"("<<start<<","<<j<<") ";
            for (int i = start; i <= j; i++)
            {
                cout << arr[i];
            }
            cout << ", ";
        }
        cout << endl;
    }
}
// Print Sum of Array solution 1
int maxSubarraySum1(int *ptr, int size)
{
    int maxSum = INT_MIN;
    for (int start = 0; start <= size; start++)
    {
        for (int j = start; j < size; j++)
        {
            int sum = 0;

            // cout<<"("<<start<<","<<j<<") ";
            for (int i = start; i <= j; i++)
            {
                sum += ptr[i];
            }
            maxSum = max(maxSum, sum); // Find max sum in Sub Array Sum
        }
    }
    cout << "Maximam Sum in Sub array is " << maxSum;
}

// Print Sum of Array solution 2

int maxSubarraySum2(int *ptr, int size)
{
    int maxSum = INT_MIN;
    for (int start = 0; start <= size; start++)
    {
        int sum = 0;
        for (int j = start; j < size; j++)
        {

            sum += ptr[j];
            maxSum = max(maxSum, sum); // Find max sum in Sub Array Sum
        }
    }
    cout << "Maximam Sum in Sub array is " << maxSum;
}
// Print Sum of Array solution 1 kadane's Algorithm

int maxSubarraySum3(int *ptr, int size)
{
    int maxSum = INT_MIN;
    int sum = 0;
    for (int start = 0; start < size; start++)
    {
        sum += ptr[start];
        maxSum = max(maxSum, sum); // Find max sum in Sub Array Sum
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << "Maximam Sum in Sub array is " << maxSum;
}
int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int size = sizeof(arr) / sizeof(int);
    // printSubarray(arr,size);
    maxSubarraySum1(arr, size);
    return 0;
}