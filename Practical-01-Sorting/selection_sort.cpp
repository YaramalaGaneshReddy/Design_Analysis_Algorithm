#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> values(n);
    for (int& value : values) {
        cin >> value;
    }

    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (values[j] < values[minIndex]) {
                minIndex = j;
            }
        }
        swap(values[i], values[minIndex]);
    }

    for (int value : values) {
        cout << value << " ";
    }
    return 0;
}
