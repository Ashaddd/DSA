#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool Duplicate(vector<int>&nums, int k){
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        if (mp.count(nums[i]) && i - mp[nums[i]] <= k) {
            return true;
        }
        mp[nums[i]] = i;
    }
    return false;
    
}
int main(){
    vector<int>nums={1,2,3,1,2,3};
    int k = 2;
    cout<<Duplicate(nums,k);
}