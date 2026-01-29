#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 2, 1, 1};
    int n = nums.size();
    int target = n / 2;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        if (count > target)
        {
            cout << nums[i];
            break;
        }
    }
}