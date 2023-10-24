#include <iostream>  // Include the necessary library for input and output.

using namespace std;  // Use the standard namespace for cout.

long long minTime(int A[], int N, int M) {
    long long start = 0, end = 0, mid, ans;  // Initialize variables for binary search.

    for (int i = 0; i < N; i++) {
        if (start < A[i])
            start = A[i];  // Initialize 'start' as the maximum time required for any job.
        end = end + A[i];  // Calculate 'end' as the total time required for all jobs.
    }

    while (start <= end) {  // Start a loop that runs while 'start' is less than or equal to 'end'.
        mid = start + (end - start) / 2;  // Calculate the middle value as a candidate for the minimum time.

        long long time = 0, count = 1;  // Initialize variables for tracking time and counting painters.

        for (int i = 0; i < N; i++) {
            time = time + A[i];  // Accumulate time for a job.
            if (time > mid) {
                count++;  // If time exceeds the candidate 'mid', increment the painter count.
                time = A[i];  // Reset time to the current job's time.
            }
        }

        if (count <= M) {
            ans = mid;  // If the current candidate 'mid' allows for completion with 'M' painters, update 'ans'.
            end = mid - 1;  // Adjust 'end' to search for a smaller 'mid'.
        } else {
            start = mid + 1;  // Adjust 'start' to search for a larger 'mid'.
        }
    }

    return ans;  // Return the minimum time required to complete all jobs.
}

int main() {
    int n = 5;  // Number of jobs
    int k = 3;  // Number of painters

    int arr[n] = {5, 10, 30, 20, 15};  // Time required for each job

    long long minPaintingTime = minTime(arr, n, k);  // Call the 'minTime' function to calculate the minimum time.

    cout << "Minimum time required to complete all jobs: " << minPaintingTime << endl;  // Output the result.

}
