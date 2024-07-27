//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        vector<int>arr(26,0);
        int miss = 0,extra = 0;
        for(char ch : str){
            if(ch >= 97 and ch <= 122)
            arr[ch - 97]++;
        }
        for(int i = 0;i<26;i++){
            if(arr[i] == 0) miss++;
            else if(arr[i] > 1) extra += arr[i] - 1;
        }
        return !(miss > k or (miss <= k and (extra - miss < 0)));
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends
