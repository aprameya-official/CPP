#include <iostream>
using namespace std;

int main() {
    int row, col, n;

    // Prompt the user to enter a number 'n'
    cout << "Enter the number: ";
    cin >> n;

    // Loop to print a pattern of asterisks in a triangular shape
    for (row = 1; row <= n; row++) {
        // Loop to print spaces before the asterisks
        for (col = 1; col <= n - row; col++) {
            // Output: Print a space to create the desired spacing
            cout << " ";
        }
        
        // Loop to print asterisks in ascending order
        for (col = 1; col <= row; col++) {
            // Output: Print an asterisk followed by a space
            cout << "* ";
        }
        
        // Output: Move to the next line after printing each row
        cout << endl; 
    }

    return 0;
}
