#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test-->0){
        int n,fav,k;
        cin >> n >> fav >> k;
        vector<int>arr(n,0);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        int val = arr[fav-1];
        sort(arr.begin(),arr.end(),greater<int>());

        bool before_k=false,after_k =false;
        for(int i =0;i<k;i++){
            if(arr[i] == val){
                before_k = true;
                break;
            }
        }
        for(int i = k;i<n;i++){
            if(arr[i] == val){
                after_k = true;
                break;
            }
        }
        if(before_k and after_k){
            cout << "MAYBE"<<endl;
        }
        else if(after_k){
            cout << "NO"<<endl;
        }
        else{
            cout << "YES"<<endl;
        }
    }
}