//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    vector<int> getPrimes(int n) {
        vector<bool>arr(n+1,true);
        vector<int>prime;
        for(int i =2;i<=sqrt(n);i++){
            if(arr[i])
            for(int j = i*i;j<=n;j+=i){
                arr[j] = false;
            }
        }
        for(int i = 2;i<=n;i++){
            if(arr[i]){
                prime.push_back(i);
            }
        }
        int i = 0,j = prime.size() - 1;
        while(i < prime.size() and j >=0){
            int temp = prime[i] + prime[j];
            if(temp == n){
                return {prime[i],prime[j]};
            }
            else if(temp < n){
                i++;
            }
            else{
                j--;
            }
            
        }
        return {-1,-1};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        vector<int> res = obj.getPrimes(n);

        Array::print(res);
    }
}

// } Driver Code Ends