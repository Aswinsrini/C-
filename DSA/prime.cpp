#include<bits/stdc++.h>
using namespace std;
void findPrime(vector<int>arr,int n){
    for(int i = 2;i<sqrt(n);i++){
        if(arr[i] == 0)
        for(int j = i*i;j<=n;j+=i){
            arr[j] = 1;
        }
    }
    for(int i = 0;i<=n;i++){
        if(arr[i] ==0 and i>1)
        cout << i<<" ";
    }
}
int main(){
    int n = 30;
    vector<int>arr(n+1,0);
    findPrime(arr,n);
}