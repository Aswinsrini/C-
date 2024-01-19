#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    regex b("(.*)(h)(.*)(e)(.*)(l)(.*)(l)(.*)(o)(.*)");
    if(regex_match(st,b)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}