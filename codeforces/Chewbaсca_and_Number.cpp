#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin >> st;
    for(int i = 0;i<st.size();i++){
        if(i == 0 and st[i] == '9'){
            cout << st[i];
        }
        else{
            if(st[i] >= '5'){
                st[i] = '9' - st[i] + '0';
            }
            cout << st[i];
        }
    }
}