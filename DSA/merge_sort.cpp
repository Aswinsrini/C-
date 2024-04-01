#include<iostream>
#include<array>
using namespace  std;
void merge(int*,int* ,int* );
void mergesort(int*);

void merge(int left[],int right[],int a[])
{
    int i=0,j=0,k=0;
    int l = *(&left + 1) - left;
    int r = *(&right + 1) - right;
   // int r=sizeof(right)/sizeof(right[0]);
      while(i<l && j<r)
     {
        if(left[i]<=right[j])
        { a[k]=left[i];
          i+=1;
        }
        else
        {
           a[k]=right[j];
           j+=1;
        }
        k+=1;
     }
     while(i<l)
     {
        a[k]=left[i];
        i+=1;
        k+=1;
     }
     while(j<r)
     {
        a[k]=right[j];
        j+=1;
        k+=1;
     }
}

void mergesort(int a[])
{
    //int n=sizeof(a)/sizeof(a[0]); 
    int n = *(&a + 1) - a;
    if(n<2)
    return;
    int mid=n/2;
    int left[mid],right[n-mid];
     for(int i=0;i<mid;i++)
     left[i]=a[i];
     for(int i=mid;i<n;i++)
     right[i-mid]=a[mid];
    mergesort(&left[0]);
    mergesort(&right[0]);
    merge(&left[0],&right[0],&a[0]);

}
int main()
{
    int a[]={5,4,3,1,9,10,0,2};
    cout<<"before sort : ";
    for(int i=0;i<8;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    mergesort(&a[0]);
     cout<<"After sort : ";
    for(int i=0;i<8;i++)
    cout<<a[i]<<" ";
    cout<<endl;

}
