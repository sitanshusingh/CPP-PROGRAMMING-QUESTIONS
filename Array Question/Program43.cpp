#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Find smallest repeating element in a sorted array.*/

/*Smallest = assigning Max Number using INT_MAX
if arr[i] is smaller then "Smallest" variable then 
assign arr[i] value in "smallest" variable
*/

int smallestRepeatingElement(int arr[], int size)                                        
{
    int smallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i] < smallest)             
        {
            smallest = arr[i];
        }
    }

    return smallest == INT_MAX ? -1 : smallest; // return -1 if no repeat found
}

int main()
{
    int arr[] = {1, 2, 3, 3, 3, 4, 4, 4, 4, 5};
    //  int arr[] = {6,5,4,3,2,1};
    int size = sizeof(arr) / sizeof(int);
    int result = smallestRepeatingElement(arr, size);
    if (result != -1)
    {
        cout << "Smallest repeating element: " << result << endl;
    }
    else
    {
        cout << "No repeating element found." << endl;
    }

    return 0;
}