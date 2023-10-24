#include <iostream>
using namespace std;

int main() {
    int n;

    // Input: Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    // Check if 'n' is 1 or 2, and handle those cases
    if (n == 1 || n == 2) {
        // Output: Display "1" and exit if 'n' is 1 or 2
        cout << "1";
        return 0;
    }

    // Loop to print the sum of (n-1) and (n-2) 'n' times
    for (int i = 0; i < n; i++) {
        // Output: Print the sum of (n-1) and (n-2)
        cout << ((n - 1) + (n - 2));
    }

    return 0;
}
