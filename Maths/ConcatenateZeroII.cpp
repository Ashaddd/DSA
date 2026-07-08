#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "10203004";
    vector<vector<int>> queries = {
        {0, 7},
        {1, 3},
        {4, 6}};

    long long sum = 0;
    long long x = 0;

    for (int i = 0; i < queries.size(); i++)
    {
        sum = 0;
        x = 0;
        for (int j = queries[i][0]; j <= queries[i][1]; j++)
        {
            int digit = s[j] - '0';
            if (digit != 0)
            {
                sum = sum * 10 + digit;
                x += digit;
            }
        }

        long long ans = sum * x;
        cout << ans << endl;
    }
}