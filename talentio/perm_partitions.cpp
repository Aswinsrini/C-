#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n , k,val,sum = 0,count_val = 0,res=1;
    cin>>n>>k;
    vector<long long> arr,temp;
    for(long long i = 0;i<n;i++){
        cin>>val;
        arr.push_back(val);
        if(val > n-k){
            sum += val;
            // temp.push_back(val);
        }
    } 
    bool set = false;
    for(long long ele : arr){
        if(ele > n-k){
            set = true;
            res = (res *(count_val+1)) % 998244353; 
            count_val = 0;
        }
        else if(set){
            count_val++;
        }
    }
    cout<<sum<<" "<<res;

}