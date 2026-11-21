# Practical 12: Traveling Salesman Problem

`salesman.cpp` uses bitmask dynamic programming to find the minimum-cost tour
that starts at city 0, visits each city once, and returns to city 0.

## Compile and run

```powershell
g++ -std=c++17 salesman.cpp -o practical
.\practical.exe
```

Input: city count followed by a square cost matrix. The algorithm takes
O(n^2 * 2^n) time and O(n * 2^n) space. The fixed-size tables support at most
10 cities.
