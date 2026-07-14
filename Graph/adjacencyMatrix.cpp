#include <iostream>
#include <vector>
using namespace std;

int main(){
    int V;
    cout << "Enter no of vertices V: " << endl;
    cin >> V;

    int E;
    cout << "Enter no of edges E: " << endl;
    cin >> E;

    // create a matrix of size (V + 1) * (V + 1)
    vector<vector<bool>> adj(V + 1, vector<bool>(V + 1, false));

    // take edges input from the user
    for(int i = 1; i <= E; i++){
        int u, v;
        cout << "Enter u and v: " << endl;
        cin >> u >> v;
        adj[u][v] = true;
        adj[v][u] = true;
    }

    // print the graph
    for(int i = 1; i <= V; i++){
        for(int j = 1; j <= V; j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}