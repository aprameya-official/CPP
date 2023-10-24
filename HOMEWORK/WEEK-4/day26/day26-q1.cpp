#include<iostream>
using namespace std;
//for decreasing order of bubble sort
int main() {
    int arr[7] = {2, 4, 6, 8, 1, 0, 9};

    // Iterate through the array from the end to the beginning
    for (int i = 7 - 2; i >= 0; i--) {
        bool swapped = false; // Variable to track if any swaps are made

        // Iterate through the unsorted part of the array
        for (int j = 0; j <= i; j++) {
            // Compare adjacent elements and swap if out of order (for decreasing order, use < instead of >)
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no swaps are made in a pass, the array is already sorted
        if (!swapped) {
            break;
        }
    }

    // Print the sorted array in decreasing order
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
//  for increasing order of bubble sort
// int main()
// {   int arr[1000]={2,4,6,8,1,0,9};
//   for(int i=7-2;i>=0;i--){
//     bool swapped=0;
//     for(int j=0;j<=i;j++){
//         if(arr[j]>arr[j+1])
//         swap(arr[j],arr[j+1]);
//          swapped=1;
//     }
//     if(swapped==0)
//     break; 
//   }
//     for(int i=0;i<7;i++)
//     cout<<arr[i]<<" ";
// }