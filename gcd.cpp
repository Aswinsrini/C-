#include<iostream>
using namespace std;
int gcd(int a , int b){
    if(a == 0 && b != 0) return b;
    else if(a != 0 && b == 0) return a;
    else if(a==b) return a;
    if(a > b)
    return gcd(a%b,b);
    else
    return gcd(a,a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    int g = gcd(a,b);
    cout<<"LCM " <<(a*b)/g<<endl;
    cout<<"GCD " <<g;

}