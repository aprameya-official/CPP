#include <iostream>
using namespace std;

// Function to calculate the cube of a number
int cube(int &n) {
    int ans = n * n * n;  // Calculate the cube and store it in 'ans'
    return ans;           // Return the calculated cube value
}

int main() {
    int n;
    cout << "Enter the number: ";  // Prompt the user to enter a number
    cin >> n;                      // Read the input number

    cube(n);                       // Call the 'cube' function with the input number 'n'

    // Display the result
    cout << "The cube of " << n << " is " << cube(n) << endl;

    return 0;  // Return 0 to indicate successful program execution
}
