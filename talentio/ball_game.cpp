#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,val,res=0;  
    cin>> n;
    for(int i= 0;i<n;i++){
        cin >> val;
        res ^= val;
    }
    if(res == 0) cout<<"B wins";
    else cout<<"A wins";
    
}