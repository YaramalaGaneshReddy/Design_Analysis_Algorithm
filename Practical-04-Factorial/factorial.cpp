#include <iostream>
using namespace std;

unsigned long long factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

unsigned long long factorialIterative(int n) {
    unsigned long long result = 1;
    for (int value = 2; value <= n; ++value) {
        result *= value;
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Factorial is undefined for negative integers";
        return 1;
    }
    if (n > 20) {
        cout << "Factorial exceeds the supported integer range";
        return 1;
    }

    cout << "Iterative factorial = " << factorialIterative(n) << '\n';
    cout << "Recursive factorial = " << factorialRecursive(n) << '\n';
    return 0;
}