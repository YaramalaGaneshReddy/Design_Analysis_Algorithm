# Practical 7: Making Change

`coinChange.cpp` finds the minimum number of coins required to make a target
amount, allowing unlimited use of each denomination.

## Compile and run

```powershell
g++ -std=c++17 coinChange.cpp -o practical
.\practical.exe
```

Input: number of denominations, the denominations, then the target amount. The
algorithm takes O(amount * number of denominations) time and O(amount) space.
