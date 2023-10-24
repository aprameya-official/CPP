#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    // Prompt the user to enter a number
    cout << "Enter the number for the sum of cubes: ";
    cin >> n;

    // Initialize the sum to zero

    // Loop to calculate the sum of cubes from 1 to 'n'
    for (int i = 1; i <= n; i++) {
        // Calculate the cube of the current number
        int cube = i * i * i;

        // Update the sum with the cube of the current number
        sum = sum + cube;
    }

    // Display the sum of cubes
    cout << "The sum of cubes from 1 to " << n << " is: " << sum;

    return 0;
}
