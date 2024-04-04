#include<bits/stdc++.h>
using namespace std;
class Solution
{
    int mod = 1e9 + 7;
    public:
    long long sumSubstrings(string s) {
        // your code here
        int n = s.size();
        long long ans = s[0] - '0';
        long long prev = ans, curr;
        for(int i = 1; i < n; i++)
        {
           curr = ((i+1) * (s[i] - '0') + prev * 10) % mod;
           prev = curr;
           ans = (ans + prev) % mod;
        }
        return ans;
    }
};

int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking string
        string s;
        cin>>s;
        Solution ob;
        //calling sumSubstrings() function
        cout << ob.sumSubstrings(s) << endl;
        
    }
    return 0;
}