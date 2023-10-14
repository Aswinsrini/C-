#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void pattern(int n,int ch,int flag,int val){
    for(int i=0;i<n;i++){
            if(flag)
            ch = i;
            else{
                ch--;
            }
            int j = 0;
            while(j<ch+1){
                cout<<"* ";
                j+=1;
            }
            if(flag)
            {
                for(int k = 0;k<2*(2*(n-i)-2);k++){
                    cout<<" ";
                }
            }
            else{

                for(int k = 0;k<2*(2*(val+i));k++){
                    cout<<" ";
                }
            }
            j = 0;
            while(j<ch+1){
                cout<<"* ";
                j+=1;
            }
            cout<<endl;
        }
}
int  newpattern(vector<string>arr1,int k){
for(string ele : arr1)
    {
        cout<<ele;
        for(int i = 0;i<k;i++){
            cout<<" ";
        }
        k = k+4;
        cout<<ele<<endl;
    }
    return k-4;
}
int main(){
    int n=3;
    // pattern(n,n,0,0);
    vector<string>arr1,arr2;
    for(int i=0;i<n;i++){
        string p ="";
        for(int j =i;j<n;j++ ){
            p.append("* ");
        }
        arr1.push_back(p);
    }
    int k = newpattern(arr1,1);
    reverse(arr1.begin(),arr1.end());
    for(string ele : arr1)
    {
        cout<<ele;
        for(int i = 0;i<k;i++){
            cout<<" ";
        }
        k = k-4;
        cout<<ele<<endl;
    }
    // pattern(n,0,1,n);
    
}