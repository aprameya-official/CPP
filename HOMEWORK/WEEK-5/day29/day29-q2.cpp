#include <iostream>
using namespace std;

int main() {
    int arr[6] = {2, 3, 5, 7, 1, 9};

    for (int i = 5; i > 0; i--) { // Start from the second-to-last element (i = 5) and go down to the first element (i = 1).
        for (int j = i; j > 0; j--) {
            if (arr[j] > arr[j - 1]) { // Check if the current element is greater than the previous one.
                swap(arr[j], arr[j - 1]); // If true, swap the elements to sort in decreasing order.
            } else {
                break; // If the current element is not greater, break the inner loop.
            }
        }
    }

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " "; // Output the sorted elements separated by a space.
    }

    return 0;
}
