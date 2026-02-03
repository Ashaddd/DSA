#include <iostream>
#include <vector>
using namespace std;
int Peak(vector<int> &nums)
{
    int n = nums.size();
    // edge condition
    if (n == 1)
        return 0;
    if (nums[0] > nums[1])
        return 0;
    if (nums[n - 1] > nums[n - 2])
        return n - 1;

    int st = 1, end = n - 2;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        if (nums[mid - 1] < nums[mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {0, 3, 8, 9, 5, 2};
    cout << Peak(nums);
}