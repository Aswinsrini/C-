#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll count_of_special_elements(vector<ll>&arr,int n){
    if(arr.size() <= 2) return 0;
    ll count_special = 0;
    vector<ll>prev{arr[0]+arr[1]};
    unordered_map<ll,int>mp;
    mp[arr[0] + arr[1]] =1;

    int max_ele  = *max_element(arr.begin(),arr.end());

    // left to right
    for(int i = 2;i<n;i++){
        for(int j = 0;j<prev.size();j++){
            prev[j] = prev[j] + arr[i];
        }
        prev.push_back(arr[i-1] + arr[i]);
        for(int ele : prev) if(max_ele >= ele) mp[ele] = 1; 
    }
    for(int ele : arr){
        if(mp.find(ele) != mp.end()) count_special++;

    }

    return count_special;
}
int main(){
    int test;
    cin >> test;
    while(test-- > 0){
        int n;
        cin >> n;
        vector<ll>arr(n);
        for(int i= 0;i<n;i++){
            cin >> arr[i];
        }
        cout << count_of_special_elements(arr,n) << endl;
    }
}