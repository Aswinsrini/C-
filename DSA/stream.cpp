//program to split the string
#include<iostream>
//#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 string a,t;//="hello world";
 getline(cin,a);
 //cout<<a.length();
stringstream x(a);
while(getline(x,t,' '))
{  if(t.length()!=0)
  cout<<t<<endl;
}
}





// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<map>
// #include<chrono>
// #include<list>
// using namespace std;
// using namespace std::chrono;
// int main()
// { map<string,int> k;

// string str;
// int n;
// auto startTime=high_resolution_clock::now();

// // for(int i=0;i<5;i++)
// // {
// //   cin>>str>>n;
// //    k.insert(pair<string,int>(str,n));
// // }
// cout<<"aswin";
// // for(auto i:k)
// // cout<<"name: "<<i.first<<" roll no: "<<i.second<<endl;
// auto stopTime=high_resolution_clock::now();
// auto duration=duration_cast<microseconds>(stopTime-startTime);
// cout<<"sec "<<duration.count()/1000000;
  
// }