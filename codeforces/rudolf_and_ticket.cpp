#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test-- > 0){
        int n,m,k,res = 0;
        cin >> n>> m >> k;
        vector<int>a(n,0),b(m,0);
        for(int i= 0;i<n;i++){
            cin >> a[i];
        }
        for(int i= 0;i<m;i++){
            cin >> b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i = 0;i<n;i++){
            if(a[i] > k) break;
            for(int j = 0;j<m;j++){
                if(a[i] + b[j] <=k) res++;
                else break;
            }
        }
        cout<<res<<endl;
    }
}