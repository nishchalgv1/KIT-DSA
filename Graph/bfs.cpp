#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(vector<int> adj[], int sv, vector<bool>& visited){
   queue<int> pendingNeighbours;
   pendingNeighbours.push(sv);
   visited[sv] = true;

   while(!pendingNeighbours.empty()){
    int front = pendingNeighbours.front();
    pendingNeighbours.pop();

    cout << front << " ";

    for(int neighbor: adj[front]){
        if(!visited[neighbor]){
            visited[neighbor] = true;
            pendingNeighbours.push(neighbor);
        }
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

    bfs(adj, 1, visited);
}