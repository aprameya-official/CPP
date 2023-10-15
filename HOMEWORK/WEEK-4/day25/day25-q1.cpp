#include<iostream>
using namespace std;
//Selection Sort Algorithm to sort the array of integers in increasing order
// int main()
// {
// int arr[6]={2,3,5,7,1,9};

// for(int i=0;i<5;i++){
//     int index=i;
//     for(int j=i+1;j<6;j++){
//         if (arr[j]<arr[index]) //by changing it to > we can get in decreasing order
//         index=j;
//     }
//     swap(arr[i],arr[index]);
// } 
// for(int i=0;i<6;i++){
//     cout<<arr[i]<<" ";
// }
//     return 0;
// }


//Selection Sort Algorithm to sort the array of integers in decreasing order
int main()
{
int arr[6]={2,3,5,7,1,9};

for(int i=5;i>=0;i--){
    int index=i;
    for(int j=i-1;j>=0;j--){
        if (arr[j]<arr[index])
        index=j;
    }
    swap(arr[i],arr[index]);
} 
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}