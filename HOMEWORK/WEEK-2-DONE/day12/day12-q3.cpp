#include <iostream>
using namespace std;

int main() {
    int age;

    // Prompt the user to enter their age
    cout << "Enter the age: ";
    cin >> age;

    // Check if the age falls within the teenage range (13 to 19)
    if (age >= 13 && age <= 19) {
        // Output: If the age is within the teenage range, print "teenager"
        cout << "teenager";
    } else {
        // Output: If the age is outside the teenage range, print "not a teenager"
        cout << "not a teenager";
    }

    return 0;
}
