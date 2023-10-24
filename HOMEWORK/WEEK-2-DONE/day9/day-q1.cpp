#include <iostream>
using namespace std;

int main() {
    int row, col;

    // Loop to print a pattern of numbers in a triangular shape
    for (row = 1; row <= 6; row++) {
        for (col = 1; col <= row; col++) {
            // Output: Print the current 'col' value followed by a space
            cout << col << " ";
        }
        // Output: Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}
