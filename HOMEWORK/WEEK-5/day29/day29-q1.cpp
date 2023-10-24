#include<iostream>
using namespace std;
//for decreasing order insertion sort
int main() {  // The main function where the program execution begins.

    int arr[6] = {2, 3, 5, 7, 1, 9};  // Declare and initialize an array of integers.

    // This is an insertion sort algorithm to sort the array in decreasing order.

    for (int i = 1; i < 6; i++) {  // Loop through the array starting from the second element.

        int index = i;  // Initialize 'index' to the current value of 'i'.

        for (int j = i; j > 0; j--) {  // Nested loop to compare and swap elements.

            if (arr[j] > arr[j - 1])  // Check if the current element is greater than the previous one.

                swap(arr[j], arr[j - 1]);  // If true, swap the elements using the swap function.

            else
                break;  // If the current element is not greater, break the inner loop.

        }
    }

    for (int i = 0; i < 6; i++)  // Loop to iterate through the sorted array.

        cout << arr[i] << " ";  // Output the elements of the array separated by a space.

    return 0;  // Return 0 to indicate successful program execution to the operating system.
}
//for increasing order insertion sort
// int main()
// { 
// int arr[6]={2,3,5,7,1,9};

// for(int i=1;i<6;i++){
//     int index=i;
//     for(int j=i;j>0;j--){
//         if (arr[j]>arr[j-1])
//         swap(arr[j],arr[j-1]);
//         else
//         break;
//     }
    
// } 
// for(int i=0;i<6;i++){
//     cout<<arr[i]<<" ";
// }
//     return 0;
// }