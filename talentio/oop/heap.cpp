#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr{1,213,4222,1,3,32,43,121,34,6,7,589};
    make_heap(arr.begin(),arr.end());
    cout<<"The top element of heap "<<arr.front()<<endl;
    pop_heap(arr.begin(),arr.end());
    cout<<"The top element of heap "<<arr.front()<<endl;

}