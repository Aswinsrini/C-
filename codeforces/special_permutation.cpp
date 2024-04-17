#include<iostream>
using namespace std;
void permutation(int n){
    if(n <= 3){
        cout << -1 <<endl;
        return;
    }
    int k = n;
    if(n%2 == 1) k = n-1;
    for(int i= k;i>=6;i-=2){
        cout <<i <<" ";
    }
    cout << "2 4 ";
    for(int i=1;i<=n;i+=2){
        cout << i<<" ";
    }
    cout << endl;
}
int main(){
    int test;
    cin >> test;
    while(test-- > 0){
        int n;
        cin >> n;
        permutation(n);
    }
}