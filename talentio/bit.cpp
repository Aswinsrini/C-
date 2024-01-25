#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 12;
    bitset<8>b(n);
    cout<<"all bits are set "<<b.all();
    cout<<"count all the bits are set "<<b.count();
}