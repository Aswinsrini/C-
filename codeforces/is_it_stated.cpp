#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n > 0){
        string st1,st2;
        cin >> st1;
        cin >> st2;
        unordered_map<char,int>mp;
        for(char ele : st1){
            mp[ele]++;
        }
        bool flag = true;
        for(char ele : st2){
            if(mp.find(ele) == mp.end()){
                cout << "NO\nYES\n";
                flag = false;
                break;
            }
            else{
                if(mp[ele] ==0){
                    cout << "NO\nNO\n";
                    flag =false;
                    break;
                }
                mp[ele]--;
            }
        }
        if(flag)
        cout << "NO\nNO\n";
        n-=2;
    }
}
