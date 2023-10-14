#include<iostream>
using namespace std;
int main()
{
    int n,k,i,j,flag=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
{     cin>>a[i];}
    cin>>k;  
    for(i=0;i<n;i++)
    {  int p=-999;
        for(j=i;j<i+k && i+k<=n;j++)
        {
            if(p<a[j])
              p=a[j];
        }
        if(p!=-999)
        cout<<p<<" ";
        else
        break;        
    }
    
}