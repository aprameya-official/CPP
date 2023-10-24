#include <iostream>
using namespace std;

int main() {
    int row, col;

    // Loop to print a pattern of numbers in a triangular shape
    for (row = 1; row <= 6; row++) {
        int count = 10;  // Initialize 'count' to 10 for each row
        for (col = 5; col >= 5 - row + 1; col--) {
            // Output: Print the current 'count' value followed by a space
            cout << count << " ";
            count++;  // Increment 'count' for the next number
        }
        // Output: Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}
