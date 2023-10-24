#include <iostream>
using namespace std;

int main() {
    int i = 1;      // Initialize a counter 'i' to 1
    int result = 1; // Initialize a variable 'result' to 1
    int x;          // Declare a variable 'x' to store user input

    cout << "Enter the number: ";
    cin >> x; // Prompt the user to enter a number

    // Check if 'x' is 0 or 1; if so, it is already the result
    if (x == 0 || x == 1) {
        cout << x;
    }

    // Use a 'while' loop to find the largest 'i' such that 'i*i' is less than or equal to 'x'
    while (result <= x) {
        i++;
        result = i * i;
    }

    // Output the largest 'i' value that satisfies 'i*i <= x'
    cout << i - 1;

    return 0; // Return 0 to indicate successful program execution
}
