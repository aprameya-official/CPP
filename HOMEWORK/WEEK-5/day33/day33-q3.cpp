#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // This function calculates the minimum capacity of a ship to transport all weights within 'D' days.
    int shipWithinDays(vector<int>& weights, int D) {
        int start = 0, end = 0, mid, ans;

        // Calculate the initial range for the ship's capacity.
        for (int i = 0; i < weights.size(); i++) {
            if (start < weights[i])
                start = weights[i];
            end = end + weights[i];
        }

        // Binary search to find the minimum capacity required.
        while (start <= end) {
            mid = start + (end - start) / 2;
            int currentWeight = 0;
            int days = 1;

            // Distribute weights into days and track the current capacity usage.
            for (int i = 0; i < weights.size(); i++) {
                currentWeight = currentWeight + weights[i];
                if (currentWeight > mid) {
                    days++;
                    currentWeight = weights[i];
                }
            }

            if (days <= D) {
                ans = mid;
                end = mid - 1; // Adjust the upper bound.
            } else {
                start = mid + 1; // Adjust the lower bound.
            }
        }
        return ans; // Return the minimum ship capacity required.
    }
};

int main() {
    // Create a vector of weights and specify the number of days 'D'.
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7};
    int D = 3;

    Solution solution; // Create an instance of the 'Solution' class.
    int result = solution.shipWithinDays(weights, D); // Call the function to find the minimum ship capacity.

    cout << "The minimum capacity of the ship to transport all weights in " << D << " days is: " << result << endl;

    return 0;
}
