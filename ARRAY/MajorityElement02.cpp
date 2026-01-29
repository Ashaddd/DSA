 #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 2, 1, 1};
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int freq = 1;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
        }
        if (freq > n / 2)
        {
            cout << nums[i];
            break;
        }
    }
}