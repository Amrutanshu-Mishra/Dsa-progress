#include<iostream>
#include<unordered_map>
#include<vector>
#include<list>
#include<queue>
using namespace std;
void bfs(int i,unordered_map<int,bool>visited,vector<int>&ans,unordered_map<int,list<int>>adj){
    queue<int>q;
    q.push(i);
    visited[i]=true;
    while (!q.empty())
    {
        int e=q.front();
        q.pop();
        ans.push_back(e);
        for(auto neighbour:adj[e]){
            if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour]=true;
            }
        }
    }
    
}
vector<int>BFS(int vertex,vector<pair<int,int>>edges){
    //create adjacency list
    unordered_map<int,list<int>>adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    unordered_map<int,bool>visited;
    vector<int>ans;
    for(int i=0;i<vertex;i++){
        if(!visited[i]){
            bfs(i,visited,ans,adj);
        }
    }
    return ans;
}
