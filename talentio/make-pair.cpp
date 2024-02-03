#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> value= {60,100,120};
    vector<int> weight= {10,20,30};
    vector<pair<int,pair<int,int>>> mp;
    int cur_weig = 50;
    for(int i=0;i<3;i++){
        mp.push_back({value[i]/weight[i],{value[i],weight[i]}});        
    }
    pair<int,int> p=make_pair(2,3);
    cout<<p.first<<" "<<p.second<<endl;

    sort(mp.begin(),mp.end(),greater<pair<int,pair<int,int>>>());
    for(auto i:mp){
        cout<<i.first<<"{"<<i.second.first<<","<<i.second.second<<"}";
    }
    int profit = 0;
    for(auto i:mp){
        if(cur_weig==0) break;
        if(i.second.second>cur_weig){
            int temp = (cur_weig);
            profit+=i.second.first;
        }
    }
}