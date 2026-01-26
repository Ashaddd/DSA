#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "Size:" << vec.size() << endl;
    cout << "Size:" << vec.capacity() << endl;

    for (int val : vec)
    {
        cout << val << endl;
    }
    vec.pop_back();
    cout << "After poping the value" << endl;
    cout << "Size:" << vec.size() << endl;
    for (int val : vec)
    {
        cout << val << endl;
    }
    cout << "Front:" << vec.front() << endl;
    cout << "back:" << vec.back() << endl;
    cout << "vector at index 1st:" << vec.at(1);
}