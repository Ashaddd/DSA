#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &Arr, int N, int C, int minAllowedDist){
    int cows =1, lastStallPos = Arr[0];

    for ( int i = 0; i < N; i++)
    {
        if (Arr[i]-lastStallPos >= minAllowedDist )
        {
            cows++;
            lastStallPos = Arr[i];
        }
        if (cows==C)
        {
            return true;
        }
        
        
    }
    return false;
    
}

int getDistance(vector<int> &Arr, int  N, int C){
    sort(Arr.begin(), Arr.end());
    int st =1, end = Arr[N-1]-Arr[0], ans=-1;
    while(st<=end){
        int mid = st + (end - st)/2;

        if (isPossible(Arr, N, C, mid))
        {
            ans = mid;
            st =mid +1;

        }else{
            end = mid - 1;
        }
        
    }
    return ans;
}

int main(){
    vector<int>Arr={1,2,8,4,9};
    int N = Arr.size(),C=3;
    cout<<getDistance(Arr,N,C);
    return 0;
    
}