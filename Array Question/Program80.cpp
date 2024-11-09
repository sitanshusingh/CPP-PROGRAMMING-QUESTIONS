#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Print all pairs of numbers from the input array whose sum is greater than the sum value k.*/


void printPairs(int arr[], int n, int k) {
    // Sort the array
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Initialize two pointers
    int left = 0;
    int right = n - 1;

    // Traverse the array
    while (left < right) {
        // Calculate sum
        int sum = arr[left] + arr[right];

        // Check if sum is greater than k
        if (sum > k) {
            // Print pairs
            for (int i = left; i <= right; i++) {
                cout << "(" << arr[i] << ", " << arr[right] << ")" << " ";
            }
            cout << endl;
            right--;
        } else {
            left++;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the sum value k: ";
    cin >> k;

    printPairs(arr, n, k);

    return 0;
}