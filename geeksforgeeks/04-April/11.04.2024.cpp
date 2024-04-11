//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        int t = n;
        int ans = 0;
        int i=0;
        vector<int>arr(30);
        i = 29;
        while(t>0){
            int bit = t&1;
            t /= 2;
            arr[i--] = bit;
        }
        int last = 0;
        while(i<30){
            int xr = last^arr[i];
            ans += pow(2,(29-i))*xr;
            last = xr;
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        Solution ob;
        //calling function grayToBinary()
       cout<< ob.grayToBinary(n)<<endl;
    }
}

// } Driver Code Ends