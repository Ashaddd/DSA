#include<iostream>
#include<cmath>
using namespace std;
double FindPoisson(double mean, int r){
    int fact=1;
    for (int i = 1; i <= r; i++)
    {
        fact*=i;
    }
    
    double result= (pow(mean,r)*exp(-mean))/fact;
    return result;
}
int main(){
    double mean;
    int r;
    cout<< "enter the value of mean & probability of success:";
    cin>> mean>> r;
    cout<<FindPoisson(mean, r);
}