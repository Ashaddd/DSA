#include <iostream>
#include <cmath>
using namespace std;
double findBinomial(int N, int R)
{
    int n = 1, r = 1, x = 1;
    for (int i = 1; i <= N; i++)
    {
        n = n * i;
    }
    for (int j = 1; j <= R; j++)
    {
        r = r * j;
    }
    for (int k = 1; k <= (N - R); k++)
    {
        x = x * k;
    }
    double result = (n / (r * x)) * (pow(0.5, R)) * (pow(0.5, N - R));
    return result;
}
int main()
{
    int N, R;
    cout << "enter the value of N: ";
    cin >> N;
    cout << "enter the value of R: ";
    cin >> R;
    cout << "the value of nCr:" << findBinomial(N, R);

    return 0;
}