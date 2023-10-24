#include <iostream>
using namespace std;

int main() {
    int row, col;

    // Loop to print a 5x5 grid of the number 4
    for (row = 1; row <= 5; row++) {
        for (col = 1; col <= 5; col++) {
            // Output: Print the number 4 followed by a space
            cout << "4 ";
        }
        // Output: Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}
