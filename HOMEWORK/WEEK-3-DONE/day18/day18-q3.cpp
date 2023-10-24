#include <iostream>
using namespace std;

// Function to swap the values of three variables
void swapthree(int &a, int &b, int &c) {
    // Temporary variables to hold the values
    int temp_b = b;
    int temp_c = c;

    // Swap the values of a, b, and c
    b = a;
    c = temp_b;
    a = temp_c;

    // Output the swapped values
    cout << "Swapped values: " << a << " " << b << " " << c << endl;
}

int main() {
    int a, b, c;

    // Input values for a, b, and c
    cout << "Enter the values for a, b, and c: ";
    cin >> a >> b >> c;

    // Call the swapthree function to swap the values
    swapthree(a, b, c);

    return 0;
}
