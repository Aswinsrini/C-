#include<iostream>
#include<bitset>
using namespace std;
string IntToBin(int num){
    return bitset<4>(num).to_string();//4 be the length of the binary string
}
int main(){
    int k = 12;
    cout<<"The Binary of the given Integer : "<<IntToBin(k);
}