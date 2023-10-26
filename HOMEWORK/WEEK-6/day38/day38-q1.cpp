#include <iostream>
using namespace std;

// Function to segregate 0s and 1s in an array
void segregate0and1(int arr[], int n) {
    // Initialize two pointers, 'start' and 'end'.
    int start = 0, end = n - 1;

    // Continue the process until 'start' is less than 'end'.
    while (start < end) {
        // If the element at 'start' is 0, move 'start' to the right.
        if (arr[start] == 0) {
            start++;
        } else {
            // If the element at 'start' is 1, check the element at 'end'.
            // If 'end' is 0, swap the elements at 'start' and 'end' to move the 1 to the right and the 0 to the left.
            if (arr[end] == 0) {
                swap(arr[start], arr[end]);
                start++; // Move 'start' to the right.
                end--;   // Move 'end' to the left.
            } else {
                end--; // If 'end' is also 1, move 'end' to the left without swapping.
            }
        }
    }
}

int main() {
    int n;
    cin >> n; // Input the size of the array.

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input the elements of the array.
    }

    segregate0and1(arr, n); // Call the segregate0and1 function to segregate 0s and 1s.

    cout << "Array after segregating 0s and 1s: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Output the modified array.
    }

    return 0;
}
