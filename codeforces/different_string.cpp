#include<bits/stdc++.h>
using namespace std;
#define int long long
string s;
void solve() {
	cin>>s;
	int t = 0;
	int len = s.length();
	for(int i = 1;i < len;i++){
		if(s[0] == s[i]){
			t++;
		}
		else{
		cout<<"YES"<<endl;
		swap(s[0],s[i]);
		cout<<s<<endl;
		return ;
		}
	}
	if(t == len - 1){
		cout <<"NO"<<endl; 
	}
	
}
signed main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	while(t --)  solve();
    return 0;
} 