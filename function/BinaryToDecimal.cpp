#include <iostream>
#include <cmath>
using namespace std;
int FindDecimal(int num)
{
    int temp = 0, i = 0;
    while (num != 0)
    {
        temp += (num % 10) * pow(2, i);
        num = num / 10;
        i++;
    }
    return temp;
}
int main()
{
    int num;
    cout << "enter a Binary number: ";
    cin >> num;
    cout << "the Decimal of number: " << FindDecimal(num);
    return 0;
}