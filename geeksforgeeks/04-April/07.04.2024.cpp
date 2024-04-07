//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	private:
	int helper(int a[],int b[],int n,int m,int i,int j,int skip,vector<vector<int>>&dp){
	    if(i >= n or j >= m) return 0;
	    if(dp[i][j] != -1) return dp[i][j];
	    int take =0,notTake = 0;
	    take = (a[i]*b[j]) + helper(a,b,n,m,i+1,j+1,skip,dp);
	    if(skip < n - m) notTake = helper(a,b,n,m,i+1,j,skip+1,dp);
	    return dp[i][j] = max(take,notTake);
	}
	public:
	int maxDotProduct(int n, int m, int a[], int b[]) 
	{ 
		vector<vector<int>>dp(n,vector<int>(m,-1));
		return helper(a,b,n,m,0,0,0,dp);
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n], b[m];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

        for(int i = 0; i < m; i++)
        	cin >> b[i];

       

	    Solution ob;
	    cout << ob.maxDotProduct(n, m, a, b) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends