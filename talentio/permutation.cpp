#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void permutation(vector<vector<int>>& res, vector<int> nums,
                     vector<int>& temp, int n, vector<bool>& set) {
        if (temp.size() == n) {
            res.push_back(temp);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (!set[i]) {
                temp.push_back(nums[i]);
                set[i] = true;
                permutation(res, nums, temp, n, set);
                temp.pop_back();
                set[i] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> temp;
        vector<bool> set(nums.size(), false);
        permutation(res, nums, temp, nums.size(), set);
        return res;
    }
};