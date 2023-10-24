#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
    // This function calculates the maximum distance for 'm' glasses to be placed in 'position'.
    int maxDistance(vector<int>& position, int m) {
        int start = 1, end, result;
        int n = position.size();

        // Sorting the positions of the glasses in ascending order.
        sort(position.begin(), position.end());
        end = position[n - 1] - position[0];

        while (start <= end) {
            int mid = start + (end - start) / 2;
            int count = 1;
            int pos = position[0];

            // Check how many glasses can be placed with the minimum distance 'mid'.
            for (int i = 1; i < n; i++) {
                if (pos + mid <= position[i]) {
                    count++;
                    pos = position[i];
                }
            }

            // Adjust the search range based on the number of glasses placed.
            if (count < m) {
                end = mid - 1;
            } else {
                result = mid;
                start = mid + 1;
            }
        }
        return result;
    }


int main() {
    // Create a vector of positions and specify the number of glasses 'm'.
    vector<int> positions = {1, 2, 4, 8, 9};
    int m = 4;

    
    int maxDist =maxDistance(positions, m); // Call the function to find the maximum distance.

    cout << "The maximum distance for " << m << " glasses is: " << maxDist << endl;

    return 0;
}
