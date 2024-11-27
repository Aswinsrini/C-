#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test-- > 0){
        int n,score = 0,val;
        cin >> n;
        unordered_map<int,int>mp;
        for(int i =0;i<n;i++){
            cin >> val;
            mp[val]++;
        }
        for(auto it : mp){
            score += it.second/2;
        }
        cout << score <<endl;
    }
}