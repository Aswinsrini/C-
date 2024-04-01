#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        permuateRecursion(nums,0,result);
        return result;
    }
    void permuateRecursion(vector<int>&num,int begin,vector<vector<int>>&result){
        if(begin >= num.size()){
            result.push_back(num);
            return;
        }
        for(int i=begin;i<num.size();i++){
            swap(num[begin],num[i]);
            permuateRecursion(num,begin+1,result);
            swap(num[begin],num[i]);
        }
    }
};