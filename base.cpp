#include<iostream>
using namespace std;
int convert(int a1,int a2,int base)
{  int b1=0,b2=0,k=0,check=0,count=0,p1=0,p2=0;
    while(a1!=0 || a2!=0)
    {  b1=0,b2=0;
        if(a1!=0)
       { b1=a1%10;
        a1/=10;
        }
        if(a2!=0)
        {
          b2=a2%10;
        a2/=10;
        }
        if(check==1)
       { k=k*10+(b1+b2+1)%base;
        if(base<=b1+b2+1 && a1!=0)
           check=1;
       else if(base<=b1+b2+1 && a2!=0)
          check=1;
          else
          check=0;}
        else
       { k=k*10+(b1+b2)%base;
        if(base<=b1+b2 && a1!=0)
           check=1;
       else if(base<=b1+b2 && a2!=0)
          check=1;
          else check=0;
       }
    }
    return k;
}
int reverse(int a)
{  int k=0;
    while(a!=0)
    { 
      k=k*10+a%10;
        a/=10;
    }
    return k;
}
int main()
{
    int a,b,base;
    cin>>a>>b>>base;
    int c=a+b;
    int k=convert(a,b,base);
   cout<< reverse(k);
    
}
