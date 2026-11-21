# Practical 2: Linear and Binary Search

`linear_Search.cpp` and `Binary_Search.cpp` each read `n` and a target, then
read `n` integers. They print the zero-based index of the target, or `-1` if it
is not present.

Binary search requires the input array to be sorted in ascending order.

## Compile and run

```powershell
g++ -std=c++17 linear_Search.cpp -o practical
.\practical.exe
```

Use `Binary_Search.cpp` in place of `linear_Search.cpp` to run binary search.

## Complexity

| Algorithm | Best | Average/Worst | Extra space |
| --- | --- | --- | --- |
| Linear search | O(1) | O(n) | O(1) |
| Binary search | O(1) | O(log n) | O(log n) recursive calls |
