#include <iostream>  
#include <vector>  // Include the vector library to work with vectors.

#include <algorithm>  // Include the algorithm library for sorting.

using namespace std; 


    int solve(int n, int k, vector<int>& stall) {  // Define a function "solve" that takes the number of stalls, number of cows, and a vector of stall positions as arguments.

        int start = 1, end, mid, ans;  // Declare integer variables for start, end, mid, and the final answer.

        sort(stall.begin(), stall.end());  // Sort the vector of stall positions in ascending order.

        end = stall[n - 1] - stall[0];  // Calculate the maximum possible distance between the first and last stall.

        while (start <= end) {  // Start a while loop that continues until the "start" value is less than or equal to the "end" value.

            mid = start + (end - start) / 2;  // Calculate the middle value as a candidate for the maximum minimum distance.

            int count = 1;  // Initialize a variable to count the number of cows placed.
            int pos = stall[0];  // Initialize a variable to keep track of the position of the last placed cow.

            for (int i = 1; i < n; i++) {  // Iterate through the stall positions starting from the second stall.

                if (pos + mid <= stall[i]) {  // Check if the current stall can accommodate a cow at a distance of "mid" from the last cow.
                    count++;  // Increment the count of cows placed.
                    pos = stall[i];  // Update the position of the last placed cow.
                }
            }

            if (count < k) {  // If the count of placed cows is less than the desired number of cows.
                end = mid - 1;  // Adjust the "end" to search for a smaller "mid."
            } else {  // If the count of placed cows is equal to or greater than the desired number of cows.
                ans = mid;  // Update the answer to the current "mid."
                start = mid + 1;  // Adjust the "start" to search for a larger "mid."
            }
        }

        return ans;  // Return the maximum minimum distance between cows.
    }


int main() {  

    int n, k;  // Declare integer variables to store the number of stalls and number of cows.
    cout << "Enter the number of stalls: ";  // Prompt the user to enter the number of stalls.
    cin >> n;  // Read and store the user's input for the number of stalls.
    cout << "Enter the number of cows: ";  // Prompt the user to enter the number of cows.
    cin >> k;  // Read and store the user's input for the number of cows.

    vector<int> stall(n);  // Create a vector named "stall" with a size of "n" to store stall positions.
    cout << "Enter the positions of stalls:" << endl;  // Prompt the user to enter the positions of stalls.

    for (int i = 0; i < n; i++) {  // Iterate through each stall position.
        cin >> stall[i];  // Read and store the user's input for each stall position.
    }

  
    int result =solve(n, k, stall);  // Call the "solve" method to find the maximum minimum distance between cows.

    cout << "The maximum minimum distance between cows is: " << result << endl;  // Print the result.

    return 0;  // Return 0 to indicate successful program execution.
}
