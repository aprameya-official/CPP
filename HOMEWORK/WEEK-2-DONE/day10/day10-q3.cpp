#include <iostream>
using namespace std;

int main() {
    int row, col, n;

    // Prompt the user to enter a number 'n'
    cout << "Enter your number: ";
    cin >> n;

    // Loop to print a pattern of numbers in a triangular shape
    for (row = 1; row <= n; row++) {
        // Loop to print spaces before the numbers
        for (col = 1; col <= n - row; col++)
            cout << "  ";
        
        // Loop to print numbers in descending order
        for (col = n; col >= row; col--) {
            // Output: Print the current 'col' value followed by a space
            cout << col << " ";
        }

        // Decrement 'n' after each row is printed
        n--;

        // Output: Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}
