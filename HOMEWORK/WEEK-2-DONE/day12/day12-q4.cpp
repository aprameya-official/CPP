#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Prompt the user to enter the value of 'a'
    cout << "Enter the value of a: ";
    cin >> a;

    // Prompt the user to enter the value of 'b'
    cout << "Enter the value of b: ";
    cin >> b;

    // Prompt the user to enter the value of 'c'
    cout << "Enter the value of c: ";
    cin >> c;

    // Check if 'a' is greater than 'b' or 'a' is greater than 'c'
    if (a > b || a > c) {
        // Output: If either condition is true, print "yes"
        cout << "yes";
    } else {
        // Output: If both conditions are false, print "no"
        cout << "no";
    }

    return 0;
}
