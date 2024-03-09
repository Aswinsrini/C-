#include<bits/stdc++.h>
using namespace std;
// class Parent{
//     protected:
//     int x;
//     void print(){
//         cout<<"Parent "<<x<<endl;
//     }
// };
// class Child : public Parent{
//     public:
//     void print(){
//         Parent::print();
//         cout<<"Child "<<x;
//         }
// };
// int main(){
//     Child c;
//     c.print();

// }

class Increment{
    int val = 0;
    public:
    void operator++(){
        val++;
    }
};

class Main{
    public:
    int val;
    Main(){
        val = 10;
    }
    void print(){
        cout<<val<<endl;
    }
};
int main(){
    Main ob;
    ob.print();

    Increment i;
    ++i;
}