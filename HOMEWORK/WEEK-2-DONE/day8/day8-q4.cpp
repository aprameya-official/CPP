#include <iostream>
using namespace std;

int main() {
    int row;
    char col;

    // Loop to print a 5x6 grid of characters from 'F' to 'K'
    for (row = 1; row <= 5; row++) {
        for (col = 'F'; col <= 'K'; col++) {
            // Output: Print the current character followed by a space
            cout << col << " ";
        }
        // Output: Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}
