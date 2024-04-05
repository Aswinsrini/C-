#include<iostream>
using namespace std;
int main(){
    int test;
    cin >> test;
    while (test-- > 0)
    {
        int n;
        cin>> n;
        string dot,hash;
        string dot_st = "..",hash_st="##";
        bool isDot = false;
        for(int i = 0;i<n;i++){
            if(isDot){
                dot.append(hash_st);
                hash.append(dot_st);
            }
            else{
                hash.append(hash_st);
                dot.append(dot_st);
            }
            isDot = !isDot;
        }
        for(int i = 0;i<n;i++){
            for(int j = 0;j<2;j++){
                cout <<( (i%2 == 0)?hash:dot )<< endl;
            }
        }
    }
    
}