#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    // Check if the entered number is less than or equal to 1
    if (n <= 1) {
        cout << "Not prime" << endl; // Output "Not prime" for numbers less than or equal to 1
    } else {
        int i = 2;  // Start checking divisors from 2 (the smallest prime)

        // Use a 'while' loop to check for divisors
        while (i < n) {
            if (n % i == 0) {
                cout << n << " is not a prime number" << endl;
                return 0;  // Exit the program if a divisor is found
            }
            i++;  // Move to the next potential divisor
        }

        // If no divisors were found, the number is prime
        cout << n << " is a prime number" << endl;
    }

    return 0;  // Return 0 to indicate successful program execution
}
