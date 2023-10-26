#include <iostream>
#include <vector>
using namespace std;

// Function to find two numbers in 'numbers' that add up to 'target'
vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> ans; // Initialize an empty vector to store the result.

    int start = 0, end = numbers.size() - 1; // Initialize two pointers, 'start' and 'end'.

    while (start < end) {
        // If the sum of elements at 'start' and 'end' is equal to the 'target':
        if (numbers[start] + numbers[end] == target) {
            ans.push_back(start + 1); // Add the position of the first number to 'ans'.
            ans.push_back(end + 1);   // Add the position of the second number to 'ans'.
            return ans; // Return the result.

        } else if (numbers[start] + numbers[end] < target) {
            start++; // If the sum is less than the target, move 'start' to the right.

        } else {
            end--; // If the sum is greater than the target, move 'end' to the left.
        }
    }

    return ans; // If no pair is found, return an empty vector.
}

int main() {
    int n;
    cin >> n; // Input the size of the 'numbers' vector.

    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i]; // Input the elements of the 'numbers' vector.
    }

    int target;
    cin >> target; // Input the target value.

    vector<int> result = twoSum(numbers, target); // Call the 'twoSum' function to find the result.

    cout << "The positions of two numbers that add up to the target are: ";
    for (int i : result) {
        cout << i << " "; // Output the positions of the two numbers.
    }

    return 0;
}
