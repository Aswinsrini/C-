#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test-- > 0){
        int n,m,res =0,count = 0;
        cin >> n >> m;
        string st;
        bool found = true;
        while(n-- > 0){
            cin >> st;
            if(found and res + st.size() <= m ){
                res += st.size();
                count++;
            }
            else{
                found =false;
            }
        }
        cout << count << endl;
    }
}