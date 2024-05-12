
/*problem link
https://www.geeksforgeeks.org/problems/minimum-number-of-steps-to-reach-a-given-number5234/1

*/
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int solve(int d, int i, int j) {
        if(i >= d and (i - d) % 2 == 0)
            return j;
        
        j++;
        return solve(d, i + j, j);
    }

    int minSteps(int d) {
        return solve(d, 0, 0);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        Solution ob;
        cout << ob.minSteps(d) << "\n";
    }
    return 0;
}
// } Driver Code Ends