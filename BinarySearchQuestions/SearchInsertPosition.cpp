#include<iostream>
#include<vector>
using namespace std;

int FindInsertPosition(vector<int> &nums, int n, int target){
    int st = 0, end = n-1;
    while(st<=end){
        int mid = st +(end - st)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]<target){
            st = mid+1;
        }else{
            end = mid-1;
        }
    }
    return st;

}
int main(){
    vector<int>nums={1,3,5,6};
    int n = nums.size();
    int target = 0;
    cout<<FindInsertPosition(nums, n, target);
}