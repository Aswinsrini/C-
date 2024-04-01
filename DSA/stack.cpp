#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
void reverse(char *c,int length)
{   stack<char>s;
  for(int i=0;i<length;i++)
  {
     s.push(c[i]);
  }
  for(int i=0;i<length;i++)
  {
    c[i]=s.top();
    s.pop();
  }
}
int main()
{
   char a[10];
   cin>>a;
   int l=strlen(a);
   reverse(a,l);
  cout<<"the reversed string is "<<a;
  
}