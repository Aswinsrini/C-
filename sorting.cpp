#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Point{
    public:
    int x;
    int y;
    // Point(int x=0,int y=0):x{x},y{y}{}
    bool operator < (const Point &p1)
    {
        return (x+y)<(p1.x+p1.y);
    }
};
int main()
{
    vector<Point>vec{{1,2},{3,1},{0,1}};
    sort(vec.begin(),vec.end());
    for(auto it:vec)
    {
        cout<<it.x<<"  "<<it.y<<endl;
    }
    vector<int>v{3,2,4,5,2,42,1,12};
    sort(v.begin(),v.end(),greater<int>());//sorting in descending order
    sort(v.begin(),v.end(),less<int>());//sorting in ascending order. It is optional one

}