# Practical 3: Max-Heap Validation

`max_heap.cpp` reads the number of elements and an array, then reports whether
the array satisfies the max-heap property. A node must be greater than or equal
to each of its children.

## Compile and run

```powershell
g++ -std=c++17 max_heap.cpp -o practical
.\practical.exe
```

Input: `n`, followed by `n` array elements. Validation takes O(n) time and
O(1) additional space.
