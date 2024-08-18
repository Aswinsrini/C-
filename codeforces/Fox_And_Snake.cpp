#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cin >> row >> col;
    string odd = string(col,'#'), even = string(col,'.');
    bool flag = true;
    for(int i= 0 ;i<row;i++){
        if(i%2 == 0){
            cout << odd << endl;
        }
        else{
            if(flag){
                even[0] = '.';
                even[col - 1] = '#';
            }
            else{
                even[0] = '#';
                even[col - 1] = '.';
            }
            cout << even << endl;
            flag = !flag;
        }
    }
}