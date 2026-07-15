#include <iostream>
#include <vector>
using namespace std;

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

    // print the graph
    for(int i = 1; i <= V; i++){
        cout << "Neighbors of " << i << "->";
        for(int j = 0; j < adj[i].size(); j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}