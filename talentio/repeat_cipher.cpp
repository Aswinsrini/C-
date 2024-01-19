#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=0,k=1;
    string st,res="";
    cin>> n>> st;
    while(i < n){
        res += st[i];
        i += k++;
    }
    cout<<res;
}