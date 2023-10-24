#include<iostream>
using namespace std;

int main() {
    int num, rem;

    // Prompt the user to enter a number
    cout << "Enter the number: ";
    cin >> num;

    // Continue processing while the number is greater than 9
    while (num > 9) {
        int ans = 0;

        // Extract and sum the individual digits of the number
        while (num != 0) {
            rem = num % 10;   // Get the last digit of the number
            num = num / 10;   // Remove the last digit from the number
            ans = ans + rem;  // Add the last digit to the sum
        }

        num = ans;  // Set 'num' to the sum of its digits for the next iteration
    }

    // Output the final result, which is a single-digit number
    cout << "The final single-digit number is: " << num;

    return 0;  // Return 0 to indicate successful program execution
}
