#include <iostream>
using namespace std;

int main() {
    int ans = 0;       // Initialize a variable to store the reversed number
    int rem, x, original; // Declare variables for remainder, input number, and original number
    cout << "Enter the number: "; // Prompt the user to enter a number
    cin >> x;           // Read the input number

    original = x;       // Store the original value of x

    while (x) {
        rem = x % 10;   // Get the last digit (remainder) of 'x'
        x = x / 10;     // Remove the last digit from 'x'
        ans = ans * 10 + rem; // Build the reversed number by adding the digit
    }

    // Check if the reversed number 'ans' is equal to the original number 'original'
    if (ans == original) {
        cout << "Palindrome"; // If they are equal, it's a palindrome
    } else {
        cout << "Not Palindrome"; // If not, it's not a palindrome
    }

    return 0; // Return 0 to indicate successful program execution
}
