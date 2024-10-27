#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Print all Pairs of numbers from a given array where at least one of the element is a prime number.*/

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int printPrimeNumbers(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (isPrime(arr[i]) || isPrime(arr[j]))
            {
                cout << arr[i] << " " << arr[j]<<endl;
            }
        }
    }
}

int main()
{

    int size;
    cout << "Enter a Size of  array: ";
    cin >> size;
    int arr[size];
    // int arr[] = {3,7,1,5,6,4,2};
    // size = sizeof(arr)/sizeof(int);
    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Print Pair of Number which has at least one Prime Number " << endl;
    printPrimeNumbers(arr, size);
    return 0;
}