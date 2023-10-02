#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int row = 0; row < n; row++) {
        // Print spaces
        for (int col = 0; col < n - row - 1; col++) {
            cout << "   ";
        }

        // Print characters in ascending order
        for (int col = 0; col <= row; col++) {
            cout << " " << char('A' + col) << " ";
        }

        // Print characters in descending order (excluding the last character)
        for (int col = row - 1; col >= 0; col--) {
            cout << " " << char('A' + col) << " ";
        }

        cout <<endl;
    }

    return 0;
}
