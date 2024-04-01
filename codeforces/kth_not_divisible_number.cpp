#include<iostream>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test-- >0){
        int n,k;
        cin >> n >>k;
        cout << k + (k-1)/(n-1)<<endl;
    }
}