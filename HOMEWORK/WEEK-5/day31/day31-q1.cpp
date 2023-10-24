#include <iostream>  // Include a library for input and output to use 'cout.'
#include <vector>    // Include a library for working with vectors.

using namespace std;  // Use the standard namespace, so we don't need to write 'std::' before 'cout' and 'vector.'

vector<int> searchRange(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1, first = -1, last = -1, mid;  // Initialize variables for the search.

    // Find the first occurrence of the target value.
    while (start <= end) {  // Start a loop that runs while 'start' is less than or equal to 'end.'
        mid = start + (end - start) / 2;  // Calculate the middle index of the current range.
        if (nums[mid] == target) {  // Check if the middle element is equal to the target.
            first = mid;  // If so, update 'first' to the middle index.
            end = mid - 1;  // Adjust 'end' to search for the first occurrence to the left of 'mid.'
        } else if (nums[mid] < target)
            start = mid + 1;  // If the middle element is less than the target, adjust 'start' to the right.
        else
            end = mid - 1;  // If the middle element is greater, adjust 'end' to the left.
    }

    // Reset the start and end pointers for finding the last occurrence.
    start = 0;  // Reset 'start' to the beginning of the array.
    end = nums.size() - 1;  // Reset 'end' to the end of the array.

    // Find the last occurrence of the target value.
    while (start <= end) {  // Start a new loop for finding the last occurrence.
        mid = start + (end - start) / 2;  // Calculate the middle index in this new search.
        if (nums[mid] == target) {  // Check if the middle element is equal to the target.
            last = mid;  // If so, update 'last' to the middle index.
            start = mid + 1;  // Adjust 'start' to search for the last occurrence to the right of 'mid.'
        } else if (nums[mid] < target)
            start = mid + 1;  // If the middle element is less than the target, adjust 'start' to the right.
        else
            end = mid - 1;  // If the middle element is greater, adjust 'end' to the left.
    }

    // Create a vector to store the first and last occurrence indices.
    vector<int> a(2);  // Define a vector 'a' with two elements for 'first' and 'last.'
    a[0] = first;  // Assign the 'first' value to the first element of the vector.
    a[1] = last;  // Assign the 'last' value to the second element of the vector.

    return a;  // Return the vector 'a' containing the first and last occurrence indices.
}

int main() {
    vector<int> nums = {3, 3, 4, 5, 6, 6, 6, 6, 7, 8};  // Create a vector 'nums' with some sorted integers.
    int target = 6;  // Specify the target value to search for.

    vector<int> result = searchRange(nums, target);  // Call the 'searchRange' function to find the target.

    for (int i : result) {  // Start a loop to print the elements of the 'result' vector.
        cout << i << " ";  // Output the value followed by a space.
    }

    return 0;  // Return 0 to indicate successful program execution.
}
