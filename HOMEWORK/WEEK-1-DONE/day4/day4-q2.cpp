#include <iostream>
using namespace std;

int main() {
    int age;

    // Prompt the user to enter their age
    cout << "Enter the age: ";
    cin >> age;

    // Check if the age is greater than 18
    if (age > 18) {
        // Output: Display "adult" if the age is greater than 18
        cout << "You are an adult.";
    } else {
        // Output: Display "teenager" if the age is 18 or younger
        cout << "You are a teenager.";
    }

    return 0;
}
