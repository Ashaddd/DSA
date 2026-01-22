#include<iostream>
using namespace std;
int SumOfDigit(int num){
    int temp=0;
    if (num<=0){
        cout<<"enter valid number!";
    }
while(num!=0){
    temp+=num%10;
    num=num/10;
}
    return temp;
}
int main(){
    int num =220;
    int x=SumOfDigit(num);
    cout<<"x = "<<x<<endl;
    return 0;
}
