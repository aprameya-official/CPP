#include <iostream>
using namespace std;

int main() {
    int row, col;

    // Loop to print a pattern of uppercase letters in a triangular shape
    for (row = 1; row <= 5; row++) {
        char ch = 'A';  // Initialize 'ch' to 'A' for each row
        for (col = 4; col >= row; col--) {
            // Output: Print the current character 'ch' followed by a space
            cout << ch << " ";
            ch++;  // Move to the next uppercase letter
        }
        // Output: Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}
