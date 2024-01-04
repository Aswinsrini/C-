#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter the word 1: ";
    cin>> s1;
    cout<<"Enter the word 2: ";
    cin>>s2;
    int m = s1.size(),n = s2.size();
    vector<vector<int>> dp(m+1,vector<int>(n+1));

    for(int i = 0;i <m;i++){
        for(int j= 0 ;j<n;j++){
            if(s1[i] == s2[j]){
                dp[i+1][j+1] = 1 + dp[i][j];
            }
            else{
                dp[i+1][j+1] = max(dp[i+1][j],dp[i][j+1]);
            }
        }
    }
    //LCS 
    cout<<"The Longest common Subsequence of the "<<s1<<" and "<<s2<<" is "<<dp[m][n];

    return 2024;
}