# Practical 5: 0/1 Knapsack

`knapsack.cpp` finds the maximum profit that fits in a capacity using dynamic
programming. Each item can be selected at most once.

## Compile and run

```powershell
g++ -std=c++17 knapsack.cpp -o practical
.\practical.exe
```

Input: item count `n`, `n` weights, `n` profits, then capacity `c`.

Time complexity is O(nc); the DP table uses O(nc) space.
