//brute force Approach
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int Arr[5]={1,2,3,4,5};
    int MaxSum = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        int CurrSum = 0;

        for (int j = i; j < 5; j++)
        {
            CurrSum += Arr[j];
            MaxSum = max(MaxSum, CurrSum);

            // Print subarray
            for (int k = i; k <= j; k++)
            {
                cout << Arr[k];
            }
            cout << " ";
        }
        cout << endl;
    }

    cout << "MaxSum: " << MaxSum;
}
