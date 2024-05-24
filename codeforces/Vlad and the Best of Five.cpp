#include<iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test-- >0){
        string s;
        cin >> s;
        int a = 0,b =0;
        for(int i=0;i<5;i++){
            if(s[i]=='A') a++;
            else b++;
        }
        cout << (a>b ? "A" : "B")<<endl;
    }
}