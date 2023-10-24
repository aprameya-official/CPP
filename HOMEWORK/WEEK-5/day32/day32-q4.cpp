#include <iostream>  // Include the necessary library for input and output.

using namespace std;  // Use the standard namespace for cout.

int findKthPositive(int arr[], int size, int k) {
    int start = 0, end = size - 1, mid, ans = -1;  // Initialize variables for binary search.

    while (start <= end) {  // Start a loop that runs while 'start' is less than or equal to 'end'.
        mid = start + (end - start) / 2;  // Calculate the middle index.

        if (arr[mid] - mid - 1 >= k) {  // Check if the difference between arr[mid] and mid (adjusted by 1) is greater than or equal to 'k.'
            ans = mid;  // Update 'ans' to mid and keep searching for a smaller index.
            end = mid - 1;  // Adjust 'end' to search the left half of the range.
        } else {
            start = mid + 1;  // Adjust 'start' to search the right half of the range.
        }
    }

    return ans + k;  // Return 'ans' plus 'k' to find the k-th missing positive number.
}

int main() {
    int arr[] = {1, 3, 7, 6, 4, 2};  // Create an array 'arr' representing a sorted array with missing positive integers.
    int n = 2;  // Specify the value of 'k' for finding the k-th missing positive integer.
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array.

    cout << findKthPositive(arr, size, n);  // Call the 'findKthPositive' function and output the result.

    return 0;  // Return 0 to indicate successful program execution.
}
