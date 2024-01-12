#include<bits/stdc++.h>
using namespace std;
long long fib(long long n,vector<long long>&dp){
    if(dp[n] != -1) return dp[n];
    if(n == 1 || n == 2) return n-1;
    dp[n]= fib(n-1,dp) + fib(n-2,dp);
    return dp[n];
}
int main(){
    long long n;
    cin>>n;
    vector<long long>dp(n+1,-1);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    cout<<"The Fibnocci is : "<<fib(n,dp)<<endl;
    for(long long ele : dp){
        cout<<ele <<" ";
    }
}
