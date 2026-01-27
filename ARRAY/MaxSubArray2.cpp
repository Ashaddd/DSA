#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int Arr[5] = {1, -2, -3, 4, 5};
    int MaxSum = INT_MIN;
    int CurrSum = 0;
    for (int i = 0; i < 5; i++)
    {
        CurrSum += Arr[i];
        MaxSum = max(CurrSum, MaxSum);
        if (CurrSum < 0)
        {
            CurrSum = 0;
        }
    }
    cout << "The Max: " << MaxSum;
}