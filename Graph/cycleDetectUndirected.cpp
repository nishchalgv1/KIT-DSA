// https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

class Solution {
    bool dfs(vector<int> adj[], int sv, vector<bool>& vis, int parent){
        vis[sv] = true;
        
        for(int neighbor: adj[sv]){
            if(!vis[neighbor]){
                bool ans = dfs(adj, neighbor, vis, sv);
                if(ans == true){
                    return true;
                }
            }else if(neighbor != parent){
                return true;
            }
        }
        return false;
    }
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<int> adj[V];
        
        for(int i = 0; i < edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool> vis(V, false);
        
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                bool output = dfs(adj, i, vis, -1);
                if(output){
                    return true;
                }
            }
        }
        return false;
    }
};