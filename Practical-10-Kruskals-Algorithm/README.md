# Practical 10: Kruskal's Minimum Spanning Tree

`krushkals.cpp` sorts the edges by weight and uses disjoint sets to construct a
minimum spanning tree.

## Compile and run

```powershell
g++ -std=c++17 krushkals.cpp -o practical
.\practical.exe
```

Input: vertex count, edge count, then each edge as `source destination weight`.
The implementation takes O(E log E) time.
