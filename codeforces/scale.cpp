#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test-- > 0){
        int n,k;
        cin >> n >> k;
        vector<string> a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        int i = 0,j=0;
        while(i < n){
            j = 0;
            while(j < n){
                cout << a[i][j];
                j += k;
            }
            i += k;
            cout << endl;
        }
        
    }
}