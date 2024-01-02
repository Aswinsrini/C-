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
    cout<<res<<" Recatangles are formed";
}
// 6
// 2 4

// 8  8/2 = 4/2 -1 1
// 2 6

// 12 12/2 = 6/2-1 3-1=2
// 2 10
// 4 8


// 20 20/2 = 10/2 - 1

// 2 18
// 4 16
// 6 14
// 8 12
// 10 10
// 12 8
// 14 6


