#include <iostream>
using namespace std;

int main() {
    int num;

    // Prompt the user to enter a number
    cout << "Enter the number: ";
    cin >> num;

    // Check if the number is non-negative and even
    if (num >= 0 && num % 2 == 0) {
        // Output: If the number is non-negative and even, print "yes"
        cout << "yes";
    } else {
        // Output: If the number is negative or odd, print "no"
        cout << "no";
    }

    return 0;
}
