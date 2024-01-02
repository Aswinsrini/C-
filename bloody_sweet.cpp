#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long n,val,count = 0; 
    cin>>n;
    vector<int> arr;
    for(int i =0;i<n;i++) 
    {
        cin >> val;
        arr.push_back(val);
        if(val == 0) count++;
    }
    long long res = 1,count_zero = 0;
    if(count == n){
        cout<<0;
    }
    else{

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