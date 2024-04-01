#include<iostream>
#include<map>
using namespace std;

int main()
{
    int l;
    map<int,string>hash;
    hash.insert(pair<int,string>(1,"aswin"));
    hash.insert(pair<int,string>(2,"rohan"));
    hash.insert(pair<int,string>(3,"ragul"));
    cout<<hash.size()<<endl;
    map<int,string>::iterator it;
    for(it=hash.begin();it!=hash.end();++it)
    {
        cout<<it->first<<"  "<<it->second<<endl;
    }

}