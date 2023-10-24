#include <iostream>  // Include the necessary library for input and output.
#include <vector>    // Include the library for working with vectors.

using namespace std;  // Use the standard namespace for cout and vectors.

int searchInsert(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1, ans = nums.size(), mid;  // Initialize variables for binary search.

    while (start <= end) {  // Start a loop that runs while 'start' is less than or equal to 'end'.
        mid = start + (end - start) / 2;  // Calculate the middle index.

        if (nums[mid] == target) {  // Check if the middle element is equal to the target.
            ans = mid;  // Update 'ans' to the middle index.
            break;  // Exit the loop since the target was found.
        } else if (nums[mid] < target) {
            start = mid + 1;  // Adjust 'start' if the middle element is less than the target.
        } else {
            ans = mid;  // Update 'ans' to the middle index.
            end = mid - 1;  // Adjust 'end' if the middle element is greater than the target.
        }
    }

    return ans;  // Return the 'ans' variable, which holds the index where 'target' should be inserted.
}

int main() {
    vector<int> nums = {1, 3, 5, 6};  // Create a vector 'nums' with sorted integers.
    int target = 7;  // Specify the target value to search for or insert.

    int result = searchInsert(nums, target);  // Call the 'searchInsert' function.

    cout << result;  // Output the result, which is the index where 'target' should be inserted.

    return 0;  // Return 0 to indicate successful program execution.
}
