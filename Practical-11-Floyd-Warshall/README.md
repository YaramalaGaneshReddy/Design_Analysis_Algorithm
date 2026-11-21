# Practical 11: Floyd-Warshall

`floyd_Warshal.cpp` computes shortest-path distances between all pairs of
vertices.

## Compile and run

```powershell
g++ -std=c++17 floyd_Warshal.cpp -o practical
.\practical.exe
```

Input: vertex count followed by a weighted adjacency matrix. Use `99999` for
an absent edge and `0` on the diagonal. This implementation supports up to 10
vertices. The algorithm takes O(V^3) time and O(V^2) space.
