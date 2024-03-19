#include<iostream>
#include<vector>
using namespace std;
void solve(int n){
    string st = to_string(n);
    vector<string>arr;
    for(int i = 0;i<st.size();i++){
        if(st[i] != '0'){
            string temp(st.size()-(i+1),'0');
            arr.push_back(st[i] + temp);
        }
    }
    cout << arr.size() <<endl;
    for(string ele : arr){
        cout << ele <<" ";
    }
    cout << endl;
}
int main(){
    int test;
    cin >> test;
    while(test-- > 0){
        int n;
        cin >> n;
        solve(n);
    }
}