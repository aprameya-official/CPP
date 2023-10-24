#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter a number 'n'
    cout << "Enter a number n: ";
    cin >> n;

    // Output a message to indicate the purpose of the program
    cout << "Numbers from 1 to " << n << " not divisible by 3 and 5 are:" << endl;

    int i = 1; // Initialize a counter to start from 1

    // Use a 'while' loop to iterate from 1 to 'n'
    while (i <= n) {
        // Check if the current number 'i' is divisible by 3 or 5
        if (i % 3 == 0 || i % 5 == 0) {
            i++; // Increment the counter and skip the number
            continue; // Continue to the next iteration of the loop
        }

        // Output the current number 'i' (not divisible by 3 or 5)
        cout << i << " ";

        i++; // Increment the counter for the next iteration
    }

    cout << endl; // Output a new line for clarity

    return 0;
}
