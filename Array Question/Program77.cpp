#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Given an array of integers of size N, Find and display the average of minimum and maximum pair sum of the element presents in the array*/

void minMaxPairSum(int arr[], int n) {
    int minSum = INT_MAX;
    int maxSum = INT_MIN;

    // Find min and max pair sums
    for (int i = 0; i < n - 1; i++) {
        int sum = arr[i] + arr[i + 1];
        minSum = min(minSum, sum);
        maxSum = max(maxSum, sum);
    }

    // Calculate average
    double average = (minSum + maxSum) / 2;

    cout << "Minimum pair sum: " << minSum << endl;
    cout << "Maximum pair sum: " << maxSum << endl;
    cout << "Average of minimum and maximum pair sum: " << average << endl;
}


int main(){

    int arr[] = {1,3,5,2,4};
    int size = sizeof(arr)/sizeof(int);
    int max_value = INT_MIN;
    int min_value = INT_MAX;

    minMaxPairSum(arr, size);


    return 0;
}