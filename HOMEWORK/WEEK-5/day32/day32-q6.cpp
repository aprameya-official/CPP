#include <vector>  // Include the library for using vectors (dynamic arrays)
#include <algorithm>  // Include the library for sorting
    int specialArray(std::vector<int>& nums) {
        // Step 1: Sort the input array in ascending order
        std::sort(nums.begin(), nums.end());

        // Step 2: Get the size of the array
        int n = nums.size();

        // Step 3: Try different values for x from 0 to n
        for (int x = 0; x <= n; x++) {
            // Step 4: Count how many numbers are greater than or equal to x
            int countGreaterOrEqual = n - (std::lower_bound(nums.begin(), nums.end(), x) - nums.begin());
            
            // Step 5: Check if the condition for a "special" array is met
            if (countGreaterOrEqual == x) {
                return x;  // Return x if the array is "special"
            }
        }

        // If no "special" x is found, return -1
        return -1;
    }
#include<iostream>
using namespace std;
int main()
{
    return 0;
}
