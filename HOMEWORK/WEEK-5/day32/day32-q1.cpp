#include <iostream>  // Include the necessary library for input and output.

using namespace std;  // Use the standard namespace for cout.

int peakIndexInMountainArray(int arr[], int n) {
    int start = 0, end = n - 1, mid;  // Initialize variables for binary search.

    while (start <= end) {  // Start a loop that runs while 'start' is less than or equal to 'end'.
        mid = end + (start - end) / 2;  // Calculate the middle index using a modified formula.

        // Check if the middle element is a peak (greater than its neighbors).
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            return mid;  // Return the index of the peak element.

        // If the middle element is not a peak, adjust the search range.
        // Move to the right side if the slope is rising (arr[mid] > arr[mid-1]).
        else if (arr[mid] > arr[mid - 1])
            start = mid + 1;

        // Move to the left side if the slope is descending (arr[mid] <= arr[mid-1]).
        else
            end = mid - 1;
    }

    return -1;  // If no peak is found, return -1 to indicate that there is no peak in the array.
}

int main() {
    int arr[] = {1, 3, 7, 6, 4, 2};  // Create an array 'arr' representing a mountain.

    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array.

    cout << peakIndexInMountainArray(arr, n);  // Call the 'peakIndexInMountainArray' function and output the result.

    return 0;  // Return 0 to indicate successful program execution.
}
