#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter a number
    cout << "Enter the number: ";
    cin >> n;

    // Output: Display a message to indicate what's being printed
    cout << "Printing all odd numbers between 1 to " << n << " ";

    // Loop to print all odd numbers between 1 and 'n'
    for (int i = 1; i < n; i += 2) {
        // Output: Print the current odd number
        cout << i << " ";
    }

    return 0;
}
