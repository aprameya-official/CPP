#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Upper part of the pattern
    for (int row = 1; row <= n; row++) {
        // Print spaces
        for (int col = 1; col <= n - row; col++) {
            cout << "  ";
        }
        // Print asterisks
        for (int col = 1; col <= 2 * row - 1; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower part of the pattern
    for (int row = n - 1; row >= 1; row--) {
        // Print spaces
        for (int col = 1; col <= n - row; col++) {
            cout << "  ";
        }
        // Print asterisks
        for (int col = 1; col <= 2 * row - 1; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
