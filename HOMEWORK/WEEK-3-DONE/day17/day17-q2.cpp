#include<iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter a year
    cout << "Enter the year: ";
    cin >> n;

    // Check if the entered year is a leap year
    if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
        cout << n << " is a leap year";
    } else {
        cout << n << " is not a leap year";
    }

    return 0; // Return 0 to indicate successful program execution
}
