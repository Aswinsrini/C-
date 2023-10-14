#include<iostream>
using namespace std;

int main()
{

int n;
cin>>n;
int val=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i+1;j--)
        {
            cout<<"  ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<val<<" ";
            val++;
        }
        cout<<endl;
    }
}