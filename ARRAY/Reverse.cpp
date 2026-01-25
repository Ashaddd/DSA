#include <iostream>
using namespace std;
void Reverse(int Arr[], int size)
{
    int front = 0;
    int rear = size - 1;
    int temp = 0;
    while (front < rear)
    {
        temp = Arr[front];
        Arr[front] = Arr[rear];
        Arr[rear] = temp;
        front++;
        rear--;
    }
}
int main()
{
    int size;
    cout << "enter the size of Array:";
    cin >> size;
    int *Arr = new int[size];
    cout << "enter the values of Array:";
    for (int i = 0; i < size; i++)
    {
        cin >> Arr[i];
    }
    cout << "reverse Array:" << endl;
    Reverse(Arr, size);
    for (int j = 0; j < size; j++)
    {
        cout << Arr[j] << " ";
    }
}