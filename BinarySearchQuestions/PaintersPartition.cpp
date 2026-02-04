#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(vector<int>Arr, int n, int m, int maxAlllowedTime){
    int Painter=1, time=0;
    for (int i = 0; i < n; i++)
    {
        if (Arr[i]>maxAlllowedTime)
        {
            return false;
        }
        
        if (time+Arr[i]<=maxAlllowedTime)
        {
            time+=Arr[i];
        }else{
            Painter++;
            time=Arr[i];
        }
        
    }
    return Painter > m? false:true;
}

int Partition(vector<int>&Arr, int n, int m){
    int sum=0,ans=0,maxAvl=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum+=Arr[i];
        maxAvl=max(maxAvl, Arr[i]);
    }
    int st=maxAvl, end=sum;
    while(st<=end){
        int mid = st+ (end-st)/2;
        if (isValid(Arr,n,m,mid))
        {
            ans=mid;
            end = mid-1;
        }else{
            st = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int>Arr={40,30,10,20};
    int n=4, m=2;
    cout<<Partition(Arr, n, m);
    return 0;

}