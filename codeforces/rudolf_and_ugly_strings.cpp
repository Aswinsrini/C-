#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;cin>>n;
	string str;cin>>str;
	int ans=0;
	for(int i=0;i<n-2;i++)
	{
		if(str[i]=='m'&&str[i+1]=='a'&&str[i+2]=='p')
		{
			ans++;i+=2;
		}
		else if(str[i]=='p'&&str[i+1]=='i'&&str[i+2]=='e')
		{
			ans++;
		}
		
	}
	cout<<ans<<"\n";
	
	
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--)
	{
		solve();
	}
}
