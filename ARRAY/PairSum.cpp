#include<iostream>
using namespace std;
int main(){
    int Arr[5]={1,2,3,4,8};
    int target=7;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (Arr[i]+Arr[j]==target){
                cout<<Arr[i]<<Arr[j];
                break;
            }
        }
        
    }
    
}