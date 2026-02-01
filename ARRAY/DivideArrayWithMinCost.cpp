#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minCostBruteForce(vector<int>& nums) {
    int n = nums.size();
    int ans = INT_MAX;

    for (int i = 1; i <= n - 2; i++) {
        for (int j = i + 1; j <= n - 1; j++) {
            int cost = nums[0] + nums[i] + nums[j];
            ans = min(ans, cost);
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {5, 2, 4, 1, 3};
    cout << minCostBruteForce(nums);
}
