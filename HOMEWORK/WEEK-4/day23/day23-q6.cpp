 #include<iostream>
 using namespace std;


int main()
{
int nums[6]={2,3,5,7,1,9};
 int sum = 0;

        for (int i = 0; i <6; i++) {
            int count = 0; // Count how many times nums[i] appears
            for (int j = 0; j <6; j++) {
                if (i != j && nums[i] == nums[j]) {
                    count++;
                    break; // No need to continue checking the same element
                }
            }
            
            if (count == 0) {
                sum += nums[i];
            }
        }
       

        cout<< sum;

}