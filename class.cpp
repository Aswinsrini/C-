// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n,k,b=0,count=0,check1=0,p=0;
//   cin>>n;
//   int a[n];
//   for(int i=0;i<n;i++)
//   {
//     cin>>a[i];
//   }
//   sort(a,a+n);
  
//   cin>>k;
//   int check=a[n-1]-a[0];
//   if(check<=k)
//   {
//     cout<<1;
//   }
//   else
//   {
//     for(int i=0;i<n;i++)
//     {  
//       i=check1;
//       if(i==n-1)
//       {
//         count++;
//         break;
//       }
//      for(int j=i+1;j<n;j++)
//      {
//        if((a[j]-a[i])<k  || a[j]-a[i]==0 || a[j]-a[i]==k)
//        { b=1;  
//        }
//         else if(b==1)
//         {
//           count++;
//           b=0;
//           check1=j;
//           break;
//         }
//       }
//       if(b==1)
//      {count++;
//       break;}
     
//     }
//     cout<<count;
//   }
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    unordered_map<string,int>a;
// 	string S, T,word;
//   getline(cin, S);
// 	stringstream X(S);
// 	while(X>> word)
//      { a[word]++;}
//  unordered_map<string,int> ::iterator m;
//  for(m=a.begin();m!=a.end();m++)
//  { cout<<m->first<<" "<<m->second<<endl;  }
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
   map<char,int>a;
  string s,w;
	
    cin>>s;
	  for(int i=0;i<s.length();i++)
     { 
      a[s[i]]++;
    }
 map<char,int> ::iterator m;
 for(m=a.begin();m!=a.end();m++)
 { cout<<m->first<<" "<<m->second<<endl;  }
return 0;
}