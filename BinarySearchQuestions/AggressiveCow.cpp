#include<iostream>
#include<vector>
using namespace std;
int FindMinDistance(vector<int>&Arr, int n,int m){
    int Min = INT_MAX;
    int Max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        Min = min(Min,Arr[i]);
        Max= max(Max,Arr[i]);
    }
    int lowest =1;
    int highest = Max-Min;
    
    
}
int main(){
    vector<int>Arr={1,2,8,4,9};
    int n = Arr.size();
    int m=3;
    cout<<FindMinDistance(Arr,n, m);
}