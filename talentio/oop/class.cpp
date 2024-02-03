#include<bits/stdc++.h>
using namespace std;
class Parent{
    protected:
    int x;
    void print(){
        cout<<"Parent "<<x<<endl;
    }
};
class Child : public Parent{
    public:
    void print(){
        Parent::print();
        cout<<"Child "<<x;
        }
};
int main(){
    Child c;
    c.print();

}