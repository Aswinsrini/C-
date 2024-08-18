#include<bits/stdc++.h>
using namespace std;
int main(){
    int row, col, val;
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            cin >> val;
            if(val != 0){
                row = i + 1;
                col = j + 1;
            }
        }
    }
    cout << abs(row - 3) + abs(col - 3);
}