#include <iostream>
using namespace std;

int main() {
    int row, col, n;

    // Prompt the user to enter a number 'n'
    cout << "Enter your number: ";
    cin >> n;

    // Loop to print a pattern of characters in a triangular shape
    for (row = 1; row <= n; row++) {
        // Loop to print spaces before the characters
        for (col = 1; col <= n - row; col++)
            cout << "  ";
        
        // Loop to print characters in descending order
        char name = 'E';  // Initialize 'name' to 'E' for each row
        for (col = 1; col <= row; col++) {
            // Output: Print the current character 'name' followed by a space
            cout << name << " ";
            name--;  // Move to the previous uppercase letter
        }

        // Output: Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}
