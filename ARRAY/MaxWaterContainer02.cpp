#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = height.size();
    int lp = 0, rp = n - 1, MaxWater = 0, CurrWater = 0;
    while (lp < rp)
    {
        int ht = min(height[rp], height[lp]);
        int width = rp - lp;
        CurrWater = ht * width;
        MaxWater = max(MaxWater, CurrWater);
        height[lp] < height[rp] ? lp++ : rp--;
    }

    cout << "The Maximum Water Container: " << MaxWater;
}
