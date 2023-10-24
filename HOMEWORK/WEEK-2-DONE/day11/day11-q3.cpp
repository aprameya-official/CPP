#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter the number of lines 'n'
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int row = 0; row < n; row++) {
        // Loop to print spaces before the characters
        for (int col = 0; col < n - row - 1) {
            // Output: Print three spaces to create the desired spacing
            cout << "   ";
        }

        // Loop to print characters in ascending order
        for (int col = 0; col <= row; col++) {
            // Output: Print the current uppercase character followed by a space
            cout << " " << char('A' + col) << " ";
        }

        // Loop to print characters in descending order (excluding the last character)
        for (int col = row - 1; col >= 0; col--) {
            // Output: Print the current uppercase character followed by a space
            cout << " " << char('A' + col) << " ";
        }

        // Output: Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}
