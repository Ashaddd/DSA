#include<iostream>
#include<vector>
using namespace std;
void MoveZeroes(vector<int>&nums){
    int n = nums.size();
    int k =0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i]!=0)
        {
            nums[k]=nums[i];
            k++;
        }
    }
    while(k<n){
        nums[k]=0;
        k++;
    }
}
int main(){
    vector<int> nums = {0,1,0,3,1,2};
    MoveZeroes(nums);
    for(int val : nums){
        cout<<val;
    }

    return 0;
}
