# Practical 9: Prim's Minimum Spanning Tree

`prims.cpp` builds a minimum spanning tree using Prim's algorithm and an
adjacency matrix.

## Compile and run

```powershell
g++ -std=c++17 prims.cpp -o practical
.\practical.exe
```

Input: vertex count followed by an `n` by `n` weighted adjacency matrix. Use
`0` where there is no edge. The implementation takes O(V^2) time and O(V^2)
space.
