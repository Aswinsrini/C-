#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr{1,2,3,4,5,11,12};
    auto it= lower_bound(arr.begin(),arr.end(),9);
    // cout << it - arr.begin();//prints index;
    // cout << *it;//prints value;
    arr.insert(arr.begin()+1,100);
    cout << arr[1];
    ranges::sort(arr);
    string l ="dfdds";
    l.

}