#include <iostream>
#include <cmath>
using namespace std;

int FindBinary(int num)
{
    int temp = 0, i = 0;
    while (num != 0)
    {
        temp += (num % 2) * pow(10, i);
        num = num / 2;
        i++;
    }
    return temp;
}
int main()
{
    int num;
    cout << "enter a Decimal number: ";
    cin >> num;
    cout << "the binary of number: " << FindBinary(num);
    return 0;
}