#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int n;

    // Prompt the user to enter a value for 'n'
    cout << "Enter a value for n: ";
    cin >> n;

    // Output a message to indicate the following output is produced using a 'while' loop
    cout << "Output in while: ";

    // Use a 'while' loop to print even numbers from 1 to 'n'
    while (i <= n) {
        if (i % 2 == 0) {
            // Output even numbers, separated by a space
            cout << i << " ";
        } else {
            // Do nothing for odd numbers
        }
        i++; // Increment the loop counter
    }

    return 0;
}
