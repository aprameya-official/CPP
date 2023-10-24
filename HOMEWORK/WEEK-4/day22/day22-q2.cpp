#include<iostream>
using namespace std;

int main() {
    int arr[18];   // Declare an array to store 18 integers.
    int sum = 0;    // Initialize a variable to store the sum of elements.
    
    cout << "Enter the elements in the array: ";

    // Loop to read 18 integers from the user and calculate their sum
    for (int i = 0; i < 18; i++) {
        cin >> arr[i];   // Read an integer from the user and store it in the array.
        sum = sum + arr[i];   // Add the entered value to the sum.
    }

    // Calculate the average of the elements
    int avg = sum / 18;

    // Print the average to the console
    cout << "The average of the elements in the array is: " << avg << endl;

    return 0;
}
