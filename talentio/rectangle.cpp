#include<iostream>
#include<math.h>
using namespace std;
int rect(int n){
    int res = 0, st = 1,en = (n - 2)/2;
    while(st < en){
        if(2 * (st + en) == n) res++;
        st++;
        en--;
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    int res = (n%2!=0)?0:(n%4 == 0)?int(n/4) - 1:int(n/4);
    cout<<res;
}



