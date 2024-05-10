//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
private:
void compute(vector<vector<int>>&res,vector<int>&temp,vector<int>&arr,int n,int target,int ind,int tempSum){
    if(tempSum == target){
        if(find(res.begin(),res.end(),temp) == res.end())
        res.push_back(temp);
        return ;
    }
    if(ind > n) return;
    for(int i = ind;i<n;i++){
        if(tempSum < target){
            temp.push_back(arr[i]);
            compute(res,temp,arr,n,target,i+1,tempSum + arr[i]);
            temp.pop_back();
        }
        else return;
    }
}
public:
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
     vector<vector<int>>res;
     vector<int>temp;
     sort(arr.begin(),arr.end());
     compute(res,temp,arr,n,k,0,0);
     return res;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends