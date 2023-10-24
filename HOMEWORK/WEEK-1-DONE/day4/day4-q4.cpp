#include <iostream>
using namespace std;

int main() {
    int age;

    // Prompt the user to enter their age
    cout << "Enter the age: ";
    cin >> age;

    // Check if the age is less than 12 or greater than 65
    if (age < 12 || age > 65) {
        // Output: Display "yes" if the age is less than 12 or greater than 65
        cout << "Yes";
    } else {
        // Output: Display "no" if the age is between 12 and 65 (inclusive)
        cout << "No";
    }

    return 0;
}
