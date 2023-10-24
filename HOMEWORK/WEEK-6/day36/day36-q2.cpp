#include <iostream>
#include <vector>

using namespace std;
    // This function calculates the minimum eating speed to finish all piles within 'h' hours.
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 0, end = 0, mid, ans, n = piles.size();
        long long sum = 0;

        // Calculate the initial range for the eating speed and the total sum of piles.
        for (int i = 0; i < n; i++) {
            sum += piles[i];
            end = max(end, piles[i]);
        }

        // Calculate a start value. If sum/h is 0, set it to 1.
        start = sum / h;
        if (!start)
            start = 1;

        // Binary search to find the minimum eating speed.
        while (start <= end) {
            mid = start + (end - start) / 2;
            int total_time = 0;

            // Calculate the total time needed to finish all piles at the current eating speed.
            for (int i = 0; i < n; i++) {
                total_time += piles[i] / mid;
                if (piles[i] % mid)
                    total_time++;
            }

            if (total_time > h) {
                start = mid + 1;
            } else {
                ans = mid;
                end = mid - 1;
            }
        }
        return ans; // Return the minimum eating speed.
    }


 int main() {
    // Create a vector of piles and specify the maximum hours 'h'.
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

     
    int result =minEatingSpeed(piles, h); // Call the function to find the minimum eating speed.

    cout << "The minimum eating speed to finish all piles in " << h << " hours is: " << result << endl;

    return 0;
}
