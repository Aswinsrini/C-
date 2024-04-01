#include<bits/stdc++.h>
using namespace std;
int ab(int a,int b){
    int  l=a*b;
    int  k =a+b;
    return (l,k);
}
int  main(){
    // string a="This is good one";
    // int pos = a.find_last_of("is");
    // if(pos != string::npos){
    //     cout<< pos;
    // }
    // else    cout<< "not found";

    // // cout << a.substr(9);
//    priority_queue<int>q;
//    stack<int>st;
//    st.push(12);
//    st.push(1);
//    st.push(122);
//    while(!st.empty()){
//     cout << st.top()<<" ";
//     st.pop();
//    }

//    deque<int>p;
//    p.push_front(12);
//    p.push_front(10);
//    p.push_back(130);
//    while(!p.empty()){
//     cout << p.front()<<" ";
//     p.pop_front();
//    }


    unordered_map<int,int>mp;
    mp[4]=2;
    mp[2]=2;
    mp[3]=2;
    mp[1]=2;
    for(auto it : mp){
        cout << it.first<< " "<<it.second<<endl;
    }
    for(auto it =mp.begin();it!=mp.end();it++){
        cout << it->first<< " "<<it->second<<endl;
    }

}
