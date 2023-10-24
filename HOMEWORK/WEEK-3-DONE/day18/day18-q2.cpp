#include<iostream>
using namespace std;

// Function to reverse an integer within the specified range
int reversenum(int &n) {
    int ans = 0;

    // Check if n is within the constraints
    if (n >= -5000 && n <= 5000) {
        // Handle the sign of n
        int sign = 1;
        if (n < 0) {
            sign = -1;
            n = abs(n); // Make n positive for processing
        }

        // Reverse the number
        while (n > 0) {
            int rem = n % 10;
            n = n / 10;
            ans = ans * 10 + rem;
        }

        // Add the sign back
        ans *= sign;

        return ans; // Return the reversed number
    } else {
        return -1; // Input out of range, return -1 as an error code
    }
}

int main() {
    int n;
    cout << "Enter a number between -5000 to 5000: ";
    cin >> n;

    int reversed = reversenum(n); // Call the reversenum function

    // Display the reversed number or an error message
    if (reversed == -1) {
        cout << "Input out of range. Please enter a number between -5000 to 5000." << endl;
    } else {
        cout << "Reversed number: " << reversed << endl;
    }

    return 0;
}
