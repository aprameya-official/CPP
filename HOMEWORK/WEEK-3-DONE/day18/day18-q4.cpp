#include <iostream>
using namespace std;

// Function to swap two values using references
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;

    cout << "Enter the values of a and b: ";
    cin >> a >> b;

    // Call the swap function to swap the values of a and b
    swap(a, b);

    cout << "Swapped values: " << a << " " << b << endl;

    return 0;
}
