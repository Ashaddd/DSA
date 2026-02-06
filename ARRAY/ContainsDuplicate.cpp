#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Duplicate(vector<int>&nums, int n){
    for (int i = 1; i < n; i++)
    {
        if (nums[i]==nums[i-1])
        {
            return true;
        }
        
    }
    return false;
    
}
int main(){
    vector<int>nums={1,2,4,3};
    sort(nums.begin(), nums.end());
    int n = nums.size();
    cout<<Duplicate(nums, n);
}