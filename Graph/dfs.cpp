#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<int> adj[], int sv, vector<bool>& visited){
    cout << sv << " ";
    visited[sv] = true;

    // explore neighbors of sv
    for(int neighbor: adj[sv]){
        if(!visited[neighbor]){
            dfs(adj, neighbor, visited);
        }
    }
}

int main(){
    int V, E;
    cout << "Enter V and E: " << endl;
    cin >> V >> E;

    vector<int> adj[V + 1];

    // take edges input
    for(int i = 1; i <= E; i++){
        int u, v;
        cout << "Enter u and v: " << endl;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(V + 1, false);

    dfs(adj, 1, visited);
}