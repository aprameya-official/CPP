#include <iostream>  // Include the necessary header file for input and output.

using namespace std;  // Using the standard namespace for cout and other standard C++ functions.

int main() {  // The main function where the program execution begins.

    char arr[1000] = {'d', 'a', 'c', 'f', 'u', 'b'};  // Declare and initialize an array of characters.

    for (int i = 7 - 2; i >= 0; i--) {  // Start a loop from 7 - 2 down to 0.
        bool swapped = 0;  // Initialize a boolean variable to track whether any elements were swapped.

        for (int j = 0; j <= i; j++) {  // Nested loop from 0 to the current value of 'i'.
            if (arr[j] > arr[j + 1])  // Check if the current element is greater than the next element.
                swap(arr[j], arr[j + 1]);  // If true, swap the elements using the swap function.
            swapped = 1;  // Set the 'swapped' flag to 1 to indicate that elements were swapped.
        }

        if (swapped == 0)  // If no elements were swapped in this pass, exit the loop.
            break;
    }

    for (int i = 0; i < 7; i++)  // Loop to iterate through the sorted or partially sorted array.
        cout << arr[i] << " ";  // Output the elements of the array separated by a space.

    return 0;  // Return 0 to indicate successful program execution to the operating system.
}