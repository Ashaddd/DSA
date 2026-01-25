#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main()
{
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int term;
    cout << "enter the number of terms in an Array:";
    cin >> term;
    int *Arr = new int[term];
    ;
    cout << "enter the values of Array:";
    for (int i = 0; i < term; i++)
    {
        cin >> Arr[i];
    }
    for (int j = 0; j < term; j++)
    {
        if (Arr[j] < smallest)
        {
            smallest = Arr[j];
        }
        if (Arr[j] > largest)
        {
            largest = Arr[j];
        }
    }
    cout << "smallest: " << smallest << endl;
    cout << "largest: " << largest;
    return 0;
}