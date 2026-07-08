#include <iostream>
using namespace std;

int main() {
    int n = 10203004;

    int rev = 0;

    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    long long digit = 0;
    int sum = 0;

    while (rev > 0) {
        int x = rev % 10;
        rev /= 10;

        if (x != 0) {
            digit = digit * 10 + x;
            sum += x;
        }
    }

    cout << digit * sum;

    return 0;
}