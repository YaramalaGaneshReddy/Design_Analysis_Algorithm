# Practical 6: Matrix-Chain Multiplication

`chainMatrix.cpp` uses dynamic programming to compute the minimum number of
scalar multiplications needed to multiply a chain of matrices.

## Compile and run

```powershell
g++ -std=c++17 chainMatrix.cpp -o practical
.\practical.exe
```

Input: the number of dimensions `n`, followed by the `n` dimension values for
the matrix chain. The program takes O(n^3) time and O(n^2) space.
