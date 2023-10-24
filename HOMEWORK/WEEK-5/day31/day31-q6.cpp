#include <iostream>  // Include the necessary library for input and output.
#include <vector>    // Include the library for working with vectors.

using namespace std;  // Use the standard namespace for cout and vectors.

int count(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1, first = -1, last = -1, mid;  // Initialize variables for binary search.

    // Find the first occurrence of the target value.
    while (start <= end) {
        mid = start + (end - start) / 2;  // Calculate the middle index.

        if (nums[mid] == target) {  // Check if the middle element is equal to the target.
            first = mid;  // Update 'first' to the middle index.
            end = mid - 1;  // Adjust 'end' to search for the first occurrence to the left of 'mid.'
        } else if (nums[mid] < target) {
            start = mid + 1;  // Adjust 'start' to search to the right if the middle element is less than the target.
        } else {
            end = mid - 1;  // Adjust 'end' to search to the left if the middle element is greater than the target.
        }
    }

    // Find the last occurrence of the target value.
    start = 0;  // Reset 'start' to the beginning.
    end = nums.size() - 1;  // Reset 'end' to the end.

    while (start <= end) {
        mid = start + (end - start) / 2;  // Calculate the middle index.

        if (nums[mid] == target) {  // Check if the middle element is equal to the target.
            last = mid;  // Update 'last' to the middle index.
            start = mid + 1;  // Adjust 'start' to search for the last occurrence to the right of 'mid.'
        } else if (nums[mid] < target) {
            start = mid + 1;  // Adjust 'start' to search to the right if the middle element is less than the target.
        } else {
            end = mid - 1;  // Adjust 'end' to search to the left if the middle element is greater than the target.
        }
    }

    if (first == -1) {
        // If 'first' is still -1, it means 'target' is not found in 'nums.'
        return 0;  // Return 0 because there are no occurrences of 'target.'
    }

    return last - first + 1;  // Return the count of 'target' in the array.
}

int main() {
    vector<int> nums = {1, 3, 3, 5, 6};  // Create a vector 'nums' with sorted integers.

    int target = 3;  // Specify the value of 'target' to count occurrences.

    int result = count(nums, target);  // Call the 'count' function and store the result.

    cout << result;  // Output the result, which is the count of 'target' occurrences in 'nums.'

    return 0;  // Return 0 to indicate successful program execution.
}
