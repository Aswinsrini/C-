#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
void printSolution(int dist[],int v){
    cout << "Vertex \t Distance from source\n";
    for(int i = 0;i<v;i++){
        cout <<i << " \t\t\t\t"<<dist[i] << endl;
    }
}
void dijkstra(vector<vector<int>>&graph,int src,int v){
    priority_queue<pii,vector<pii>,greater<pii>>q;
    vector<int>dist(v,INT_MAX);
     
    dist[src] = 0;
    q.push({1,src});
    while(!q.empty()){
        int u = q.top().second;
        q.pop();
        for(int k=0;k<v;k++){
            if(graph[u][k] and dist[u] != INT_MAX and dist[u] + graph[u][k] < dist[k]){
                dist[k] = dist[u] + graph[u][k];
                q.push({dist[k],k});
            }
        }
    }
    printSolution(dist.data(),v);
}
int main(){
    int v,src;
    cin >> v;
    vector<vector<int>>graph(v,vector<int>(v));
    for(int i = 0;i<v;i++){
        for(int j=0;j<v;j++){
            cin >> graph[i][j];
        }
    }
    cin >> src;
    dijkstra(graph,src,v);
    /*int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
    */
    return 0;
}