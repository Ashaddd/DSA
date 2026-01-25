#include <iostream>
using namespace std;
int LinearSearch(int Arr[], int term, int target)
{
    for (int i = 0; i < term; i++)
    {
        if (Arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int term, target;
    cout << "enter the number of terms in Array:";
    cin >> term;
    int *Arr = new int[term];
    cout << "enter the values of Array:";
    for (int i = 0; i < term; i++)
    {
        cin >> Arr[i];
    }
    cout << "enter the numner to search:";
    cin >> target;
    int result = LinearSearch(Arr, term, target);
    cout << "the index of target is: " << result;
}
