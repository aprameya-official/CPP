#include<iostream>
using namespace std;

int main() {
    int ans = 0, rem, x;

    // Prompt the user to enter a number
    cout << "Enter the number: ";
    cin >> x;

    // Reverse the digits of the number
    while (x) {
        rem = x % 10;   // Get the last digit of the number
        x = x / 10;     // Remove the last digit
        ans = ans * 10 + rem;  // Build the reversed number
    }

    // Output the reversed number
    cout << ans;

    return 0; // Return 0 to indicate successful program execution
}
