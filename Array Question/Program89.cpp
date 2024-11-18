#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min_steps_to_zero(int N) {
    int steps = 0;
    while (N > 0) {
        // Extract digits of N
        vector<int> digits;
        int temp = N;
        while (temp > 0) {
            digits.push_back(temp % 10);
            temp /= 10;
        }
        
        // Find the maximum digit
        int max_digit = *max_element(digits.begin(), digits.end()); 
        
        // Subtract the max digit from N
        N -= max_digit;
        
        // Increment the step counter
        steps++;
    }
    return steps;
}

int main() {
    int N;
    cin >> N;
    
    cout << min_steps_to_zero(N) << endl;
    
    return 0;
}