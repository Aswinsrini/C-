#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test-- >0){
        int n;
        cin >> n;
        vector<int>arr(n,0);
        for(int i =0;i<n;i++){
            cin >> arr[i];
        }
        while(true){
            bool flag = false;
            for(int i = 1;i<n-1;i++){
                if(arr[i-1] > 0 and arr[i]>1 and arr[i+1]>0){
                    arr[i-1]--;
                    arr[i]-=2;
                    arr[i+1]--;
                    flag = true;
                }
            }

            if(!flag){
                bool another = false;
                for(int i = 0;i<n;i++){
                    cout << arr[i]<<" ";
                    if(arr[i] != 0){
                        // cout <<"NO"<<endl;
                        another = true;
                        // break;
                    }
                }
                if(!another){
                    cout<<"YES"<<endl;
                }
                break;
            }
        }
    }
}