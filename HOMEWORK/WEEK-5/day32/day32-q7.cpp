#include <iostream>  // Include the necessary library for input and output.

using namespace std;  // Use the standard namespace for cout and cin.

bool isPerfectSquare(int num) {
    for (long i = 0; i <= num; i++) {  // Start a loop from 0 to 'num' (inclusive).
        if (i * i == num)  // Check if 'i' squared is equal to 'num'.
            return true;  // Return true if 'num' is a perfect square.
    }
    return false;  // If the loop completes without finding a perfect square, return false.
}

int main() {
    int num;  // Declare an integer variable 'num' to store the input.
    cin >> num;  // Read the value of 'num' from the user.

    cout << isPerfectSquare(num);  // Call the 'isPerfectSquare' function and output the result (true or false).

    return 0;  // Return 0 to indicate successful program execution.
}
