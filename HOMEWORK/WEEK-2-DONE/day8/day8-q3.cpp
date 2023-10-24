#include <iostream>
using namespace std;

int main() {
    int row, col;

    // Loop to print a 5x6 grid of cube numbers
    for (row = 1; row <= 5; row++) {
        for (col = 1; col <= 6; col++) {
            // Output: Print the cube of 'col' followed by a space
            cout << col * col * col << " ";
        }
        // Output: Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}
