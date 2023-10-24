#include <iostream>  // Include the necessary library for input and output.

using namespace std;  // Use the standard namespace for cout.

int findPages(int A[], int N, int M) {
    if (M > N)
        return -1;  // If the number of students is greater than the number of books, it's not possible, return -1.
    
    int start = 0, end = 0, mid, ans;  // Initialize variables for binary search.

    for (int i = 0; i < N; i++) {
        start = max(start, A[i]);  // Initialize 'start' as the maximum number of pages in any book.
        end += A[i];  // Calculate 'end' as the total number of pages in all books.
    }

    while (start <= end) {  // Start a loop that runs while 'start' is less than or equal to 'end'.
        mid = start + (end - start) / 2;  // Calculate the middle value as a candidate for the minimum pages.

        int pages = 0, count = 1;  // Initialize variables for tracking pages and counting students.

        for (int i = 0; i < N; i++) {
            pages += A[i];  // Accumulate pages read by a student.
            if (pages > mid) {
                count++;  // If pages exceed the candidate 'mid', increment the student count.
                pages = A[i];  // Reset pages to the current book's pages.
            }
        }

        if (count <= M) {
            ans = mid;  // If the current candidate 'mid' allows for allocation to 'M' students, update 'ans'.
            end = mid - 1;  // Adjust 'end' to search for a smaller 'mid'.
        } else {
            start = mid + 1;  // Adjust 'start' to search for a larger 'mid'.
        }
    }

    return ans;  // Return the minimum number of pages to allocate.
}

int main() {
    int N = 7;  // Number of books
    int M = 2;  // Number of students

    int A[] = {12, 34, 67, 90, 45, 78, 23};  // Number of pages in each book

    int minimumPages = findPages(A, N, M);  // Call the 'findPages' function to calculate the minimum pages.

    cout << "Minimum number of pages to allocate: " << minimumPages << endl;  // Output the result.

    return 0;  // Return 0 to indicate successful program execution.
}
