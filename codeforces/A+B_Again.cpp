#include<iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
       string st;
       cin >> st;
       cout << st[0] - '0' +  st[1] - '0'<< endl;
    }
}