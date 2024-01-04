#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<double> sampleStats(vector<int>& count) {
        vector<double> res;
        long long maximum = 0, n = 0, freq = 0, sum = 0, freq_val = 0, val1 = 0, val2 = 0,sum_ = 0;
        double med = 0.0;
        bool set = true;
        for (long long i = 0; i < count.size(); i++) {
            if (count[i] != 0 && set) {
                val1 = i;
                res.push_back(double(i));
                set = false;
            }
            if (count[i] != 0) {
                n += count[i];
                maximum = i;
            }
            if (count[i] > freq) {
                freq = count[i];//n =4 - 2 
                freq_val = i;
            }
            sum += (count[i] * (i));
        }
        set = false;
        for(long long i = 0;i<count.size();i++){
            sum_ += count[i];
            if(n/2 == sum_ && n%2==0 && !set){
                med += i ;
                set = true;
            }
            else if(set && count[i]!=0){
                med = (med+i)/2.0;
                break;
            }
            else if(n/2 < sum_ ){
                med = i;
                break;
            }


        }
        res.push_back(double(maximum));
        res.push_back(double(double(sum) / n));
        res.push_back(double(med));
        res.push_back(double(freq_val));
        return res;
    }
};