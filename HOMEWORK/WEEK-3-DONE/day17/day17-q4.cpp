#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    // Store the original value of 'n' in 'x' for later reference
    int x = n;

    // Check if 'n' is less than 1; if so, it cannot be a power of 2
    if (n < 1) {
        cout << x << " is not a power of 2";
    }

    // Use a loop to repeatedly divide 'n' by 2 until 'n' becomes 1 or an odd number
    while (n != 1) {
        if (n % 2 == 1) {
            cout << x << " is not a power of 2";
            return 0; // Exit the program
        }
        n = n / 2;
    }

    // If 'n' becomes 1, it is a power of 2
    cout << x << " is a power of 2";

    return 0; // Return 0 to indicate successful program execution
}
