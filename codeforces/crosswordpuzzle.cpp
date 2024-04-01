//LEO CrossWord puzzle
#include<bits/stdc++.h>
using namespace std;
string given;
int row,col,n,easy=0;
bool leo=false;
bool visited[10][10]={0};
// memset(visited,0,sizeof(visited));
void cross_word(vector<vector<char>> a,int r1,int c1,int n)
{   
 int len=given.length()-1;
 if(leo!=true)
    for(int i=r1;i<row;i++)
    {
        for(int j=c1;j<col;j++)
        {   easy=0;
            if(a[i][j]==given[n] && n<=len && leo!=true && visited[i][j]<3)
           {   cout<<i<<" " <<j<<" "<<given[n]<<endl;
              visited[i][j]+=1;
              if(visited[i][j]>=4)return;
                if(n==len){ leo=true;return ;}
                if(i>=0 && j>=0 && leo!=true)
                {    
                    if(j+1<=col-1 && leo!=true)
                    {
                        if(a[i][j+1]==given[n+1])
                        {cross_word(a,i,j+1,n+1);
                        easy=1;}
                    }
                    if(i+1<=row-1 && leo!=true)
                    { 
                        if(a[i+1][j]==given[n+1] )
                        {cross_word(a,i+1,j,n+1);
                        easy=1;}
                    }
                    if(j-1<=col-1 && leo!=true)
                    {
                        if(a[i][j-1]==given[n+1] )
                        {cross_word(a,i,j-1,n+1);
                        easy=1;}
                    }
                    if(i-1<=row-1 && leo!=true)
                    {
                        if(a[i-1][j]==given[n+1])
                        {cross_word(a,i-1,j,n+1);
                        easy=1;
                        }
                    }
                    if(easy==0) return ;
                }   
           }
        }
    }
    return; 
}
int main()
{
    cin>>row>>col;
    // vector<vector<bool>>visited;
    char k;
   vector<vector<char>> a;
   for(int i=0;i<row;i++)
   {
        a.push_back(vector<char>());
        // visited.push_back(vector<bool>());
        for(int j=0;j<col;j++)
        {
            cin>>k;
            a[i].push_back(k);
            // visited.push_back(0);
        }
    
   }
   cin>>given;
   cross_word(a,0,0,0);
   cout<<boolalpha<<leo;
}