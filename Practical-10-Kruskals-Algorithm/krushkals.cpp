#include <iostream>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, weight;
};

int parent[100];

int find(int x) {
    if (parent[x] == x)
        return x;

    return parent[x] = find(parent[x]);
}

void unite(int u, int v) {
    parent[find(u)] = find(v);
}

int main() {
    int n, e;
    Edge edges[100];

    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> e;

    cout << "Enter edges (source destination weight):\n";

    for (int i = 0; i < e; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    }

    // Sort edges by weight
    sort(edges, edges + e, [](Edge a, Edge b) {
        return a.weight < b.weight;
    });

    // Initialize parent array
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }

    int totalCost = 0;
    int count = 0;

    cout << "\nEdges in Minimum Spanning Tree:\n";

    for (int i = 0; i < e; i++) {
        int u = edges[i].u;
        int v = edges[i].v;

        if (find(u) != find(v)) {
            cout << u << " - " << v
                 << " : " << edges[i].weight << endl;

            totalCost += edges[i].weight;
            unite(u, v);
            count++;

            if (count == n - 1)
                break;
        }
    }

    if (count != n - 1) {
        cout << "MST does not exist.\n";
    } else {
        cout << "Minimum Cost = " << totalCost << endl;
    }

    return 0;
}