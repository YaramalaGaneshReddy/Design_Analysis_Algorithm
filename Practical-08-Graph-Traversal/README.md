# Practical 8: Graph Traversal

`bfs_dfs.cpp` performs depth-first search (DFS) and breadth-first search (BFS)
on an undirected graph.

## Compile and run

```powershell
g++ -std=c++17 bfs_dfs.cpp -o practical
.\practical.exe
```

Input: vertex count and edge count, followed by each edge as `u v`, then the
starting vertex. Vertices are numbered from `0` to `n - 1`. Each traversal
takes O(V + E) time and O(V) auxiliary space.
