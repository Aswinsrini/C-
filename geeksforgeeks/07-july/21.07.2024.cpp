//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
private:
const int mod = 1e9+7;
  public:
    long long int findMaxProduct(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        long long int ans = 1,ind = -1;
        int max_value = INT_MIN;
        for(int i = arr.size()-1;i>=0;i--){
            max_value = max(max_value,arr[i]);
            if(arr[i] < 0){
                ind = i;
                break;
            }
            if(arr[i]!=0)
            ans = (ans*arr[i]) % mod;
        }
        if(ind%2 == 0){
            ind--;
        }
        
        for(int i = 0;i<=ind;i++){
            ans = (ans*arr[i]) % mod;
        }
        if(ans == 1 and max_value <=0) return 0;
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        long long int ans = ob.findMaxProduct(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends
