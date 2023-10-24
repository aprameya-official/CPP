#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter a number within the range 1-12
    cout << "Enter a number (1-12): ";
    cin >> n;

    // Output a message to indicate the purpose of the program
    cout << "Month: ";

    // Use a 'switch' statement to match the entered number to a month
    switch (n) {
        case 1:
            cout << "Jan"; // If 'n' is 1, it corresponds to January
            break;
        case 2:
            cout << "Feb"; // If 'n' is 2, it corresponds to February
            break;
        case 3:
            cout << "Mar"; // If 'n' is 3, it corresponds to March
            break;
        // Continue cases for the remaining months...
        case 12:
            cout << "Dec"; // If 'n' is 12, it corresponds to December
            break;
        default:
            // Handle the case when 'n' is not in the range 1-12
            cout << "Invalid input"; // Display a message for invalid input
            break;
    }

    cout << endl; // Output a new line for clarity

    return 0; // Return 0 to indicate successful program execution
}
