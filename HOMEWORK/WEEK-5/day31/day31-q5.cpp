#include <iostream>  // Include the necessary library for input and output.

using namespace std;  // Use the standard namespace for cout.

int countZeroes(int nums[], int n) {
    int start = 0, end = n - 1;  // Initialize variables for binary search.
    int mid, first = -1, last = -1, target = 0;

    // Find the first occurrence of the target value (0).
    while (start <= end) {
        mid = start + (end - start) / 2;  // Calculate the middle index.

        if (nums[mid] == target) {  // Check if the middle element is equal to the target (0).
            first = mid;  // Update 'first' to the middle index.
            end = mid - 1;  // Adjust 'end' to search for the first occurrence to the left of 'mid.'
        } else if (nums[mid] > target) {
            start = mid + 1;  // Adjust 'start' to search to the right if the middle element is greater than the target.
        } else {
            end = mid - 1;  // Adjust 'end' to search to the left if the middle element is less than the target.
        }
    }

    // Find the last occurrence of the target value (0).
    start = 0;  // Reset 'start' to the beginning.
    end = n - 1;  // Reset 'end' to the end.

    while (start <= end) {
        mid = start + (end - start) / 2;  // Calculate the middle index.

        if (nums[mid] == target) {  // Check if the middle element is equal to the target (0).
            last = mid;  // Update 'last' to the middle index.
            start = mid + 1;  // Adjust 'start' to search for the last occurrence to the right of 'mid.'
        } else if (nums[mid] > target) {
            start = mid + 1;  // Adjust 'start' to search to the right if the middle element is greater than the target.
        } else {
            end = mid - 1;  // Adjust 'end' to search to the left if the middle element is less than the target.
        }
    }

    if (first == -1) {
        // If 'first' is still -1, it means '0' is not found in 'nums.'
        return 0;  // Return 0 because there are no occurrences of '0'.
    }

    return last - first + 1;  // Return the count of '0's between the 'first' and 'last' occurrences.
}

int main() {
    int n = 12;
    int arr[n] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};  // Create an array 'arr' with some integers.

    cout << countZeroes(arr, n);  // Call the 'countZeroes' function and output the result.

    return 0;  // Return 0 to indicate successful program execution.
}
