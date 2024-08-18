#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,val = 0;
    cin >> test;
    while(test-- > 0){
        string st;
        cin >> st;
        if(st[0] == '+' or st[1] == '+' or st[2] == '+') val++;
        else val--;
    }
    cout << val;
}