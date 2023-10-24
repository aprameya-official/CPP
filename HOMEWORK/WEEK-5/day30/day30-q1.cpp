#include<iostream>
using namespace std;
#include <algorithm> 
//Binary search in increasing order
// void sortarr(int arr[]){
//     for(int i=0;i<6;i++){
//     for(int j=i;j>0;j--){
//         if (arr[j]>arr[j+1])
//         swap(arr[j],arr[j+1]);
//         else
//         break;
//     }  
// } 
// }


// int BinarySearch(int arr[],int n,int key){
//     int start=0,end=n-1,mid;
//     while(start<=end){
//         mid=(start+end)/2; // or start+(end-start)/2 it avoids int error
//         if(arr[mid]==key)
//         return mid;
//         else if(arr[mid]<key)
//         start=mid+1;
//         else
//         end=mid-1;
//     }
//     return -1;
// }
// int main()
// { int arr[6]={2,3,5,7,1,9};
// int key=9;
// sortarr(arr);
// cout<<BinarySearch(arr,6,key);
//     return 0;
// }
//Binary search in decreasing order
#include <iostream>
using namespace std;

void sortarr(int arr[]) {
    for (int i = 6; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            if (arr[j] > arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            } else {
                break;
            }
        }
    }
}

int BinarySearch(int arr[], int n, int key) {
    int start = 0, end = n - 1, mid;
    while (start <= end) {
        mid = (start + end) / 2; // Calculate the middle index.
        if (arr[mid] == key) {
            return mid; // Key found at index 'mid.'
        } else if (arr[mid] > key) {
            start = mid + 1; // Adjust 'start' if the key is in the left half.
        } else {
            end = mid - 1; // Adjust 'end' if the key is in the right half.
        }
    }
    return -1; // Key not found in the array.
}

int main() {
    int arr[6] = {2, 3, 5, 7, 1, 9};
    int key = 7;

    sortarr(arr); // Sort the array in decreasing order using your sortarr function.

    int result = BinarySearch(arr, 6, key); // Search for 'key' in the sorted array.

    cout << "Index of " << key << " is: " << result;

    return 0;
}
