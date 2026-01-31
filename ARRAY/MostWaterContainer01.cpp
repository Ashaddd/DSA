#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = height.size();
    int MaxWater = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (height[i] > height[j])
            {
                MaxWater = max(MaxWater, height[j] * (j - i));
            }
            else
            {
                MaxWater = max(MaxWater, height[i] * (j - i));
            }
        }
    }
    cout << MaxWater;
}