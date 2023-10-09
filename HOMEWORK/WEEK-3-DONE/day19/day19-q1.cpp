#include<iostream>
using namespace std;
int solve(int A, int B, int C) {
    int initial=(C - 1) % B;
    int final=(initial+ A ) % B;
    return final;
}
int main()
{
    int A,B,C;
   cin>>A>>B>>C;
   cout<<solve(A,B,C);

    return 0;
}