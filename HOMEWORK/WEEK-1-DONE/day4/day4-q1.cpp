#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Prompt the user to enter the first number
    cout << "Enter the first number: ";
    cin >> a;

    // Prompt the user to enter the second number
    cout << "Enter the second number: ";
    cin >> b;

    // Compare the values of 'a' and 'b'
    if (a > b) {
        // Output: Display the larger number 'a'
        cout << "The larger number is: " << a;
    } else {
        // Output: Display the larger number 'b'
        cout << "The larger number is: " << b;
    }

    return 0;
}
