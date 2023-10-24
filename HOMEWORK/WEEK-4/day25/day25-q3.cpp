#include <iostream>
using namespace std;

int main() {
    char arr[6] = {'a', 'c', 'b', 'd', 'g', 'f'};

    // Iterate through the array
    for (int i = 0; i < 5; i++) {
        int index = i; // Initialize the index of the minimum character

        // Find the index of the maximum character in the unsorted part of the array
        for (int j = i + 1; j < 6; j++) {
            if (arr[j] > arr[index]) {
                index = j;
            }
        }

        // Swap the maximum character with the current character
        swap(arr[i], arr[index]);
    }

    // Print the sorted array in decreasing order
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
