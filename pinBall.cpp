#include<iostream>
using namespace std;
void pinBall(string st,int n){
    for(int i = 0;i<n;i++){
        string temp = st;
        int res = 0,j=i;
        while(j>=0 &&  j < st.size()){
            if(temp[j] == '>'){
                temp[j] = '<';
                j++;
            }
            else{
                temp[j] = '>';
                j--;
            }
            res++;
        }
        cout << res <<" ";
    }
    cout<<endl;
}
int main(){
    int test;
    cin >> test;
    while(test-- > 0){
        int n;
        string st;
        cin >> n >> st;
        pinBall(st,n);
    }
}