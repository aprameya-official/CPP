#include <iostream>
using namespace std;

int main() {
    char uppercase = 'A';   // Initialize a character variable for uppercase letters, starting with 'A'
    char lowercase = 'a';   // Initialize a character variable for lowercase letters, starting with 'a'

    cout << "Uppercase letters: ";
    while (uppercase <= 'Z') {
        cout << uppercase << " ";  // Output the current uppercase letter
        uppercase++;  // Move to the next uppercase letter
    }

    cout << endl;

    cout << "Lowercase letters: ";
    while (lowercase <= 'z') {
        cout << lowercase << " ";  // Output the current lowercase letter
        lowercase++;  // Move to the next lowercase letter
    }

    cout << endl;

    return 0;  // Return 0 to indicate successful program execution
}
