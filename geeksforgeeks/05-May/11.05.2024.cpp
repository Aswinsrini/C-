//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> jugglerSequence(int n) {
         vector<int> ans = {n};
        int prev = ans.back();
        
        while(prev != 1) {
            int temp;
            
            if(prev&1) {
                temp = pow(prev, 1.5);
            }
            else {
                temp = pow(prev, 0.5);
            }
            
            prev = temp;
            ans.push_back(temp);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        vector<int> ans = ob.jugglerSequence(n);
        for (int u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends