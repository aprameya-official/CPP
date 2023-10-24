#include <iostream>  // Include the necessary library for input and output.
#include <vector>    // Include the library for working with vectors.

using namespace std;  // Use the standard namespace for cout and vectors.

int findPeakElement(vector<int>& nums) {
    int start = 0, end = nums.size() - 1;  // Initialize variables for binary search.

    while (start < end) {  // Start a loop that runs while 'start' is less than 'end'.
        int mid = start + (end - start) / 2;  // Calculate the middle index.

        if (nums[mid] > nums[mid + 1]) {  // Check if the middle element is greater than the next element.
            end = mid;  // Move towards the left side because a peak is likely to the left.
        } else {
            start = mid + 1;  // Move towards the right side because a peak is likely to the right.
        }
    }

    return start;  // Return the index of the peak element.
}

int main() {
    vector<int> nums = {1, 2, 1, 3, 5, 6, 4};  // Create a vector 'nums' representing an array with a peak element.

    int peakIndex = findPeakElement(nums);  // Call the 'findPeakElement' function to find the peak index.

    cout << "A peak element is found at index: " << peakIndex << endl;  // Output the index of the peak element.

    return 0;  // Return 0 to indicate successful program execution.
}
