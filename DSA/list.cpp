#include<bits/stdc++.h>
using namespace std;

void print(list<int>l1){
    for(int ele : l1){
        cout << ele <<" ";
    }
    cout<<endl;
}
int main(){
    int n,val,key,pos;
    cin >> n;
    list<int>l1;
    for(int i = 0;i<n;i++){
        cin >> val;
        l1.push_back(val);
    }
    cin >> n;
    list<int>l2;
    for(int i = 0;i<n;i++){
        cin >> val;
        l2.push_back(val);
    }

    cin >>val;
    l1.push_front(val);
    print(l1);
    cin >>val;
    l1.push_back(val);
    print(l1);

    cin >>key >> val;
    auto it = l1.begin();
    advance(it, key-1);
    l1.insert(it, val);
    print(l1);

    cin >> key >>val;
    it = find(l1.begin(),l2.end(),key-1);
    l1.insert(it, val);
    print(l1);

    l1.pop_front();
    print(l1);
    l1.pop_back();
    print(l1);  

    cin >> pos;
    auto it1 = l1.begin();
    advance(it1,pos-1);
    l1.erase(it1);
    print(l1);

    cin >> val;
    it1 = find(l1.begin(),l1.end(),val);
    l1.erase(it1);
    print(l1);

    cin >> val;
    auto it2 = l1.begin();
    advance(it2,val);
    rotate(l1.begin(),it2,l1.end());
    print(l1);
    cout <<"end"<<endl;
    reverse(l1.begin(),l1.end());
    print(l1);
}