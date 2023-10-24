#include <iostream>  // Include the necessary library for input and output.

using namespace std;  // Use the standard namespace for cout.

int Sqrt(int x) {
    if (x < 2)  // Check if x is less than 2.
        return x;  // If true, return x because the square root of 0 or 1 is the number itself.
    
    int start = 0, end = x, mid, ans = -1;  // Initialize variables for binary search.

    while (start <= end) {  // Start a loop that runs while 'start' is less than or equal to 'end'.
        mid = start + (end - start) / 2;  // Calculate the middle value.

        if (mid == x / mid) {  // Check if the square of 'mid' is equal to 'x.'
            return mid;  // If true, return 'mid' as the square root.
        } else if (mid < x / mid) {  // Check if the square of 'mid' is less than 'x.'
            ans = mid;  // Update 'ans' to 'mid' and keep looking for a larger square root.
            start = mid + 1;  // Adjust 'start' to search the right half of the range.
        } else {
            end = mid - 1;  // Adjust 'end' to search the left half of the range.
        }
    }

    return ans;  // Return 'ans,' which holds the largest integer square root.
}

int main() {
    int n = 27;  // Define the integer 'n' for which we want to find the square root.

    cout << Sqrt(n);  // Output the result of the 'Sqrt' function, which is the square root of 'n.'

    return 0;  // Return 0 to indicate successful program execution.
}
