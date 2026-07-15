// gfg
class Solution {
    void dfs(vector<int> adj[], int sv, vector<bool>& visited){
        visited[sv] = true;
        
        for(int neighbor: adj[sv]){
            if(!visited[neighbor]){
                dfs(adj, neighbor, visited);
            }
        }
    }
  public:
    int countConnected(int V, vector<vector<int>>& edges) {
        
        //convert list of edges into adjacency list
        
        vector<int> adj[V];
        for(int i = 0; i < edges.size(); i++){
            // we need u and v
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool> visited(V, false);
        int count = 0;
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                dfs(adj, i, visited);
                count++;
            }
        }
        return count;
        
    }
};