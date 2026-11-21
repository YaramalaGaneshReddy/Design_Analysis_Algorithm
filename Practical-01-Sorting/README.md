# Practical 1: Sorting Algorithms

Implementations of bubble sort, selection sort, insertion sort, merge sort,
and quick sort, as listed in the suggested experiments.

## Files

- `bubble_sort.cpp`
- `selection_sort.cpp`
- `insertion_sort.cpp`
- `merge_sort.cpp`
- `Quick_sort.cpp`

Each program reads `n` followed by `n` integers, then prints them in ascending
order.

## Compile and run

```powershell
g++ -std=c++17 bubble_sort.cpp -o practical
.\practical.exe
```

Replace `bubble_sort.cpp` with any of the other source filenames to run a
different algorithm.

## Complexity

| Algorithm | Best | Average | Worst | Extra space |
| --- | --- | --- | --- | --- |
| Bubble sort | O(n) | O(n^2) | O(n^2) | O(1) |
| Selection sort | O(n^2) | O(n^2) | O(n^2) | O(1) |
| Insertion sort | O(n) | O(n^2) | O(n^2) | O(1) |
| Merge sort | O(n log n) | O(n log n) | O(n log n) | O(n) |
| Quick sort | O(n log n) | O(n log n) | O(n^2) | O(log n) average recursion |
