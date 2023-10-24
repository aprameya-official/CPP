#include <iostream>  // Include the necessary library for input and output.

using namespace std;  // Use the standard namespace for cout.

bool search(int arr[], int target) {
    int start = 0, end = arr.size() - 1, mid;  // Initialize variables for binary search.

    while (start <= end) {  // Start a loop that runs while 'start' is less than or equal to 'end'.
        mid = start + (end - start) / 2;  // Calculate the middle index.

        if (arr[mid] == target) {  // Check if the middle element is equal to the target.
            return true;  // Target found, return true.
        } else if (arr[mid] == arr[start] && arr[mid] == arr[end]) {
            // Handle the case where there are duplicates at both ends.
            ++start;  // Increment 'start' to skip duplicates from the beginning.
            --end;  // Decrement 'end' to skip duplicates from the end.
        } else if (arr[mid] >= arr[start]) {  // Check if the left half of the array is sorted.
            if (arr[start] <= target && arr[mid] > target) {
                end = mid - 1;  // Adjust 'end' to search the left half.
            } else {
                start = mid + 1;  // Adjust 'start' to search the right half.
            }
        } else {  // If the right half of the array is sorted.
            if (arr[mid] < target && arr[end] >= target) {
                start = mid + 1;  // Adjust 'start' to search the right half.
            } else {
                end = mid - 1;  // Adjust 'end' to search the left half.
            }
        }
    }
    return false;  // Target not found, return false.
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};  // Create an array 'arr' representing a rotated and sorted array.
    int target = 5;  // Specify the value of 'target' to search for in the array.

    bool found = search(arr, target);  // Call the 'search' function to check if the target is in the array.

    if (found) {
        cout << "Target " << target << " found in the array." << endl;  // Output a message indicating the target is found.
    } else {
        cout << "Target " << target << " not found in the array." << endl;  // Output a message indicating the target is not found.
    }
    return 0;  // Return 0 to indicate successful program execution.
}
