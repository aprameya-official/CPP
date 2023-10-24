#include<iostream>
using namespace std;

// Function to count the number of set bits in an integer
int setBits(int &N) {
    int count = 0;
    while (N > 0) {
        int b = N % 2;
        if (b == 1)
            count++;
        N = N / 2;
    }
    return count;
}

int main() {
    int N;
    cout << "Enter the number: ";
    cin >> N;
    cout << "The number of set bits is: " << setBits(N);
    return 0;
}
