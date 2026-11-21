# Practical 4: Factorial

`factorial.cpp` computes the factorial of a non-negative integer using both
iterative and recursive methods.

## Compile and run

```powershell
g++ -std=c++17 factorial.cpp -o practical
.\practical.exe
```

Input: one non-negative integer. Both methods take O(n) time; the iterative
method uses O(1) extra space and the recursive method uses O(n) call-stack
space.
