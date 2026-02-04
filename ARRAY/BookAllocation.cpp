#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int>Arr, int n, int m, int maxAllowedPages){
    int stud=1, pages=0;

    for (int i = 0; i < n; i++)
    {
        if (Arr[i]> maxAllowedPages)
        {
            return false;
        }
        if (pages+Arr[i]<=maxAllowedPages)
        {
            pages+=Arr[i];
        }else{
            stud++;
            pages=Arr[i];
        }
        
        
    }
    return stud > m ? false : true;
    
}

int AllocateBook(vector<int> &Arr, int n, int m){
    if (m>n)
    {
        return -1;
    }
    
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum+=Arr[i];
    }
    int st=0, end=sum;
    int ans=1;
    while(st<= end){
        int mid = st +(end-st)/2;
        if (isValid(Arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> Arr={2,1,3,4};
    int n=4, m =2;
    
    cout<<AllocateBook(Arr,n,m);
    return 0;
}