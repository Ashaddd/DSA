#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 13;
    int n = vec.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        int pairSum = vec[i] + vec[j];
        if (pairSum < target)
        {
            i++;
        }
        else if (pairSum > target)
        {
            j--;
        }
        else if (pairSum == target)
        {
            cout << i << "," << j;
            break;
        }
    }
}