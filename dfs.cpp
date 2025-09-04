#include <iostream>
#include <vector>
using namespace std;

void dfs_recursive(int node, vector<vector<int>>& graph, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs_recursive(neighbor, graph, visited);
        }
    }
}

int main() {
    int n = 6; 
    vector<vector<int>> graph(n);

    graph[0] = {1, 2};
    graph[1] = {0, 3, 4};
    graph[2] = {0, 5};
    graph[3] = {1};
    graph[4] = {1};
    graph[5] = {2};

    vector<bool> visited(n, false);

    cout << "DFS Recursive: ";
    dfs_recursive(0, graph, visited);

    return 0;
}
