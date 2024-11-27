#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    string s = "codeforces";
    while(test-- > 0){
        string st;
        int count = 0;
        cin >> st;
        for(int i = 0; i < st.size(); i++){
            if(st[i] != s[i]) count++;
        }
        cout<< count << endl;
    }
}