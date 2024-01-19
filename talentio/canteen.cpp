#include<bits/stdc++.h>

using namespace std;
int main(){
    int n , t;
    cin>>n>>t;
    string st;
    cin>>st;
    while(t--){
        int pos=0;
        while((pos = st.find("BG",pos)) != string::npos){
            st.replace(pos,2,"GB");
            pos+=2;
        }
    }
    cout<<st;
}
