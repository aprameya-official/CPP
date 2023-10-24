#include <iostream>
using namespace std;

int main() {
    int row, col, n;

    // Prompt the user to enter a number 'n'
    cout << "Enter the number: ";
    cin >> n;

    // Loop to print a pattern of numbers in a triangular shape
    for (row = 1; row <= n; row++) {
        // Loop to print spaces before the numbers
        for (col = 1; col <= n - row; col++) {
            // Output: Print two spaces to create the desired spacing
            cout << "  ";
        }
        
        // Loop to print numbers in ascending order
        for (col = 1; col <= 2 * row - 1; col++) {
            // Output: Print the current 'col' value followed by a space
            cout << col << " ";
        }
        
        // Output: Move to the next line after printing each row
        cout << endl; 
    }

    return 0;
}
