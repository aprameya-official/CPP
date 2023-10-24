#include<iostream>
using namespace std;

int main()
{
    int nums[6] = {2, 3, 5, 7, 1, 9};
    int sum = 0;

    for (int i = 0; i < 6; i++) {
        int count = 0; // Initialize a count to track how many times nums[i] appears

        for (int j = 0; j < 6; j++) {
            if (i != j && nums[i] == nums[j]) {
                count++; // Increase the count if a matching element is found
                break; // No need to continue checking the same element
            }
        }

        if (count == 0) {
            // If count is 0, it means the element is unique (no duplicates)
            sum += nums[i]; // Add the unique element to the sum
        }
    }

    cout << "The sum of unique elements is: " << sum << endl;
    return 0;
}
