#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,val; 
    cin>>n;
    vector<int> arr;
    for(int i =0;i<n;i++) {
        cin >> val;
        arr.push_back(val);
    }
    if(count(arr.begin(),arr.end(),1) == 0){
        cout<<0;
    }
    else{
        long long res = 1,count_zero = 0;
        bool set = false;
        for(int ele : arr){
            if(ele == 1){
                set = true;
                res *= (count_zero+1);
                count_zero = 0;  
            }
            else if(set){
                count_zero++;
            }
        }
        cout<<res;
    }
}