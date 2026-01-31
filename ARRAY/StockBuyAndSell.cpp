#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int MaxProfit = 0, Bestbuy = prices[0];
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] > Bestbuy)
        {
            MaxProfit = max(MaxProfit, prices[i] - Bestbuy);
        }
        Bestbuy = min(Bestbuy, prices[i]);
    }
    cout << "The Maximum Profit would be: " << MaxProfit;
}