#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    // Input: Prompt the user to enter a number
    cout << "Enter the number for the sum of squares: ";
    cin >> n;

    // Initialize the sum to zero

    // Loop to calculate the sum of squares from 1 to 'n'
    for (int i = 1; i <= n; i++) {
        // Calculate the square of the current number
        int square = i * i;

        // Update the sum with the square of the current number
        sum = sum + square;
    }

    // Output: Display the sum of squares
    cout << "The sum of squares from 1 to " << n << " is: " << sum;

    return 0;
}
