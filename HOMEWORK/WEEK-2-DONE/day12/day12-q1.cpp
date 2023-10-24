#include <iostream>
using namespace std;

int main() {
    int temp;

    // Prompt the user to enter the temperature in Fahrenheit
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> temp;

    // Check if the temperature is within the range 70 to 90
    if (temp >= 70 && temp <= 90) {
        // Output: If the temperature is within the range, print "yes"
        cout << "yes";
    } else {
        // Output: If the temperature is outside the range, print "no"
        cout << "no";
    }

    return 0;
}
