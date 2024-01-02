#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long n,res = 0,power_of_two=1;
    cin>>n;
    for(long long i = 1;i<=n;i++) res += pow(2,i);
    cout<<res;
}