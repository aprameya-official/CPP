#include <iostream>  // Include the necessary library for input and output.

using namespace std;  // Use the standard namespace for cout.

int search(int arr[], int size, int target) {
    int start = 0, end = size - 1, mid;  // Initialize variables for binary search.

    while (start <= end) {  // Start a loop that runs while 'start' is less than or equal to 'end'.
        mid = start + (end - start) / 2;  // Calculate the middle index.

        if (arr[mid] == target)  // Check if the middle element is equal to the target.
            return mid;  // Return the index of the target element.

        if (arr[mid] >= arr[0]) {  // Check if the left half of the array is sorted.
            if (arr[start] <= target && arr[mid] >= target)
                end = mid - 1;  // Adjust 'end' to search the left half.
            else
                start = mid + 1;  // Adjust 'start' to search the right half.
        } else {  // If the right half of the array is sorted.
            if (arr[mid] < target && arr[end] >= target)
                start = mid + 1;  // Adjust 'start' to search the right half.
            else
                end = mid - 1;  // Adjust 'end' to search the left half.
        }
    }

    return -1;  // If the target is not found, return -1 to indicate it's not in the array.
}

int main() {
    int arr[] = {1, 3, 7, 6, 4, 2};  // Create an array 'arr' representing a rotated and sorted array.
    int n = 7;  // Specify the value of 'n' to search for in the array.
    int size = sizeof(arr) / sizeof(arr[0);  // Calculate the size of the array.

    cout << search(arr, size, n);  // Call the 'search' function and output the result.

    return 0;  // Return 0 to indicate successful program execution.
}
