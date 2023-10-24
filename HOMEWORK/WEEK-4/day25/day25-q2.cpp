#include <iostream>
using namespace std;

int main() {
    int arr[6] = {2, 3, 5, 7, 1, 9};

    // Iterate through the array from the last element to the first
    for (int i = 5; i >= 0; i--) {
        int index = i; // Initialize the index of the maximum element

        // Find the index of the maximum element in the unsorted part of the array
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[index]) {
                index = j;
            }
        }

        // Swap the maximum element with the last element in the unsorted part
        swap(arr[i], arr[index]);
    }

    // Print the sorted array in decreasing order
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
