//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
        int i = s.size() - 1,j=0;
        while(i >= 0){
            if(s[i] == '0'){
                s[i] = '1';
                break;
            }
            else{
                s[i] = '0';
                if(i == 0) s = '1' + s;
            }
            i--;
        }
        for(int i = 0;i<s.size();i++){
            if(s[i] == '1'){
                break;
            }
            j++;
        }
        return s.substr(j,s.size());
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends
