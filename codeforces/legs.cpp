#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int test;
    cin >> test;
    while(test-- > 0){
        int n;
        cin >> n;
        cout << round(n*0.25) << endl;
    }
}