#include<bits/stdc++.h>
using namespace std;
string entertainment_MAC(string st,int operation){
    string temp = st;
    reverse(temp.begin(),temp.end());
    if(st <= temp){
        return st; 
    }
    else{
        temp += st;
        return temp;
    }
    return "";
}
int main(){
    int test;
    cin >> test;
    while(test-- > 0){
        string st;
        int operation;
        cin >> operation >> st;
        cout << entertainment_MAC(st,operation) << endl;
    }    
}