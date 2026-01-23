#include <iostream>
#include <cmath>
using namespace std;

double findBinomial(int N, int R, double P)
{
    int factN = 1, factR = 1, factNR = 1;

    for (int i = 1; i <= N; i++)
        factN *= i;

    for (int j = 1; j <= R; j++)
        factR *= j;

    for (int k = 1; k <= (N - R); k++)
        factNR *= k;

    double nCr = (double)factN / (factR * factNR);

    double result = nCr * pow(P, R) * pow((1 - P), N - R);
    return result;
}

int main()
{
    int N, R;
    double P;

    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Enter the value of R: ";
    cin >> R;

    cout << "Enter probability of success (P): ";
    cin >> P;

    cout << "Binomial Probability = " << findBinomial(N, R, P);

    return 0;
}