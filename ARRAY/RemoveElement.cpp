#include<iostream>
#include<vector>
using namespace std;

int RemoveElement(vector<int>&nums, int n, int val){
    int k=0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i]!=val)
        {
            nums[k]=nums[i];
            k++;
        }
        
    }
    return k;
}
int main(){
    vector<int> nums ={0,1,2,2,3,0,4,2};
    int val = 2;
    int n = nums.size();
    cout<<RemoveElement(nums, n, val);
}