#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long n,res = 0,power_of_two=1;
    cin>>n;
    // for(long long i = 1;i<=n;i++) res += pow(2,i);
    for (long long i = 1; i <= n; i++) {
        res += power_of_two;  // Add current power of 2 to the result
        power_of_two *= 2;    // Calculate next power of 2
    }
    cout<<res;
}