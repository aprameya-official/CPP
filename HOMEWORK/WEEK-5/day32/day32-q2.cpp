#include <iostream>  // Include the necessary library for input and output.
#include <vector>    // Include the library for working with vectors.

using namespace std;  // Use the standard namespace for cout and vectors.

int findMin(vector<int>& arr) {
    int start = 0, end = arr.size() - 1;  // Initialize variables to represent the start and end of the range.

    while (start < end) {  // Start a loop that runs while 'start' is less than 'end'.
        int mid = start + (end - start) / 2;  // Calculate the middle index.

        if (arr[mid] > arr[end]) {  // Check if the middle element is greater than the last element.
            start = mid + 1;  // Adjust 'start' to search the right half of the range.
        } else if (arr[mid] < arr[end]) {  // Check if the middle element is less than the last element.
            end = mid;  // Adjust 'end' to search the left half of the range.
        } else {
            // Handle the case when arr[mid] is equal to arr[end].
            end--;  // Decrement 'end' to consider the next-to-last element.
        }
    }

    return arr[start];  // Return the minimum element in the rotated and sorted array.
}

int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};  // Create a vector 'arr' representing a rotated and sorted array.

    int minElement = findMin(arr);  // Call the 'findMin' function to find the minimum element.

    cout << "The minimum element in the rotated array is: " << minElement << endl;  // Output the result.

    return 0;  // Return 0 to indicate successful program execution.
}
