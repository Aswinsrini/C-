//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        int n = arr.size();
        if(n == 1) return arr[0];
        sort(arr.begin(),arr.end());
        string res;
        for(int i = 0,j=0;i < arr[0].size() && j < arr[n-1].size();i++,j++){
            if(arr[0][i] != arr[n-1][j]){
                break;
            }
            res += arr[0][i];
        }
        return (res.size()==0)?"-1":res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends
