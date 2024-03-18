#include<bits/stdc++.h>
using namespace std;
int compute_beauty_array(vector<int>arr,int n){
    int sum = 0;
    for(int i = 1;i<n;i++){
        sum += (arr[i] - arr[i-1]);
    }
    return sum;
}
int val(int k){
    return k;
}
float val(float p,float k){
    return p*2;
}
int main(){
    int test;
    cin >> test;
    while(test-- > 0){
        int n;
        cin >> n;
        vector<int>arr(n,0);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        cout << compute_beauty_array(arr,n)<<endl;
    }

}