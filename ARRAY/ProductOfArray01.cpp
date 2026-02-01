#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int prod = 1;
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                prod *= nums[j];
            }
        }
        ans[i] = prod;
    }
    for (int val : ans)
    {
        cout << val << " ";
    }
}