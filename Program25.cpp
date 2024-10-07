#include<iostream>
using namespace std;

/*you are given an array of integers and a "K" Value.
Your task is to find the index of the last occurrence of the  "K" value in the array.
 if the "K" value does not exist in array, return -1.*/

int main()
{
    int size_of_array, k;
    
    cout << "Enter Size of Array ";
    cin >> size_of_array;
    int arr[size_of_array];
    cout<<"Enter value of array"<<endl;
    for (int i = 0; i < size_of_array; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter a K Value to find in array ";
    cin >> k;
    for (int i = size_of_array; i>=0; i--)
    {
        if (k == arr[i])
        {
            cout<< k << " last occurrence index is " << i;
            break;
        }
    }
    return 0;
}