#include<bits/stdc++.h>
using namespace std ;
int problem_generator(int round,string problem){
    vector<int>arr(7,0);
    for(char ele : problem){
        arr[ele - 65]++;
    }
    int ans = 0;
    for(int i= 0;i<round;i++){
        for(int j=0;j<7;j++){
            if(arr[j] <= 0) ans++;
            else arr[j]--;
        }
    }
    return ans;
}
int main(){
    int test;
    cin >> test;
    while(test-- > 0){
        int n,round;
        
        string problem;
        cin >> n >> round >> problem;
        cout << problem_generator(round,problem) <<endl;
    }
}