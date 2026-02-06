#include<iostream>
#include<vector>
using namespace std;

vector<int> PlusOne(vector<int>&nums){
    int carry=0;
    int n = nums.size();
    for (int i = n-1; i >= 0; i--)
    {
        if (nums[i]<9)
        {
            nums[i]++;
            return nums;
        }else{
            nums[i]=0;
        }
        
    }
    nums.insert(nums.begin(),1);
    return nums;
}
int main(){
    vector<int>nums={9,9,9,9,9};
    PlusOne(nums);
    for(int val : nums){
        cout<<val<<" ";
    }
    return 0;
}