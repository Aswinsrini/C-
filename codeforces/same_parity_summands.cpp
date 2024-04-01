#include<iostream>
using namespace std;
void solve(long long n,long long k){
    long long x;
    if(n%2 == 0 and k%2 ==1){
        x = 2;
    }
    else x = 1;
    long long sum = n - ((k-1)*x);
    if(sum > 0 and sum%2 == x%2){
        cout << "YES\n";
        for(int i = 0;i<k-1;i++){
            cout << x<<" ";
        }
        cout << sum << endl;
    }
    else{
        cout <<"NO"<<endl;
    }
}
int main(){
    long long test;
    cin >> test;
    while (test-->0)
    {
        long long n, k;
        cin >> n>> k;
        solve(n,k);
    }
    
}