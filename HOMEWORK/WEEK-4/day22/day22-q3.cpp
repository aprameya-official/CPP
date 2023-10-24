#include<iostream>
using namespace std;

int main() {
    int size, x;

    // Prompt the user to enter the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Prompt the user to enter the value to be found
    cout << "Enter the value you want to find: ";
    cin >> x;

    int arr[size]; // Declare an array of the specified size

    // Prompt the user to enter array elements
    cout << "Enter the elements: ";

    for (int i = 0; i < size; i++) {
        cin >> arr[i]; // Read elements into the array
    }

    // Loop through the array to find the index of the value 'x'
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            // If the value is found, print its index and exit the program
            cout << "The element " << x << " is present at index number " << i << endl;
            return 0;
        }
    }

    // If the value is not found, print a message and exit the program
    cout << "The element " << x << " is not present in the array." << endl;

    return 0;
}
