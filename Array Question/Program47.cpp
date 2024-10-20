#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Print the elements that occur more then once in a sorted array*/


/*Step-1:- assign 0 in count varible
  Step-2:- loop start = 0 and end = size - 1
  Step-3:- I have used 2 condition with "And" Operator both condition should be true then control enter in if block
                first is:- if arr[i] == arr[i+1] 
                Second is:- count != arr[i]
  Step-4:-  if both codition is true then two operation will Enter in "If  block"
            first operation is:- print the number in terminal
            Second is:- store that number in "count" variable
  Step-5:-  run the loop until size-1
*/

int main()
{
    int arr[] = {1, 2, 3, 3, 4, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6};
    int size = sizeof(arr) / sizeof(int);
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {

        if (arr[i] == arr[i + 1] && count != arr[i])
        {
            cout << arr[i] << " ";
            count = arr[i];
        }
    }

    return 0;
}