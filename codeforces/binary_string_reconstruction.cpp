#include<iostream>
using namespace std;
string string_reconstruction(int n0,int n1,int n2){
    string n2_str(n2,'1');
    string n0_str(n0*2,'0');
    if(n1 >= 2){
        n2_str+= "00";
        n2_str = "00" + n2_str;
        n1-=2;
    }
}
int main(){
    int test;
    cin >> test;
    while (test-- >0)
    {
        int n0,n1,n2;
        cin >> n0 >> n1 >> n2;
        cout <<string_reconstruction(n0,n1,n2) << endl;
    }
    
}