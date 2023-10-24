#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter a number
    cout << "Enter the number: ";
    cin >> n;

    // Output: Display a message to indicate what's being printed
    cout << "Printing all numbers divisible by 4 from 1 to " << n << " ";

    // Loop to print numbers divisible by 4 between 1 and 'n'
    for (int i = 1; i <= n; i++) {
        // Check if the current number is divisible by 4
        if (i % 4 == 0) {
            // Output: Print the current number if it's divisible by 4
            cout << i << " ";
        }
    }

    return 0;
}
