#include<iostream>
using namespace std;
int reversenum(int &n) {
    // Check if n is within the constraints
    int ans=0;
    if (n >= -5000 && n <= 5000) {
        // Handle the sign of n
        int sign = 1;
        if (n < 0) {
            sign = -1;
            n = std::abs(n);
        }

        // Reverse the number
       while(n>0){
        int rem=n%10;
         n=n/10;
         ans=ans*10+rem;

      }
        // Add the sign back
        ans *= sign;
        return ans;
    } else {
        return -1; // Input out of range
    }
}
int main()
{
    int n;
    cout<<"enter the number between -5000 to 5000  ";
    cin>>n;
    cout<<reversenum(n);

}