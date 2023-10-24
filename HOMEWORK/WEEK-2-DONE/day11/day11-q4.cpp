#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter the number of rows 'n'
    cout << "Enter the number of rows: ";
    cin >> n;

    // Upper part of the pattern
    for (int row = 1; row <= n; row++) {
        // Loop to print spaces before the asterisks
        for (int col = 1; col <= n - row; col++) {
            // Output: Print two spaces to create the desired spacing
            cout << "  ";
        }
        // Loop to print asterisks in ascending order
        for (int col = 1; col <= 2 * row - 1; col++) {
            // Output: Print an asterisk followed by a space
            cout << "* ";
        }
        // Output: Move to the next line after printing each row
        cout << endl;
    }

    // Lower part of the pattern
    for (int row = n - 1; row >= 1; row--) {
        // Loop to print spaces before the asterisks
        for (int col = 1; col <= n - row; col++) {
            // Output: Print two spaces to create the desired spacing
            cout << "  ";
        }
        // Loop to print asterisks in ascending order
        for (int col = 1; col <= 2 * row - 1; col++) {
            // Output: Print an asterisk followed by a space
            cout << "* ";
        }
        // Output: Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}
