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

    for (int i = 1; i < n; ++i) {
        const int current = values[i];
        int j = i - 1;
        while (j >= 0 && values[j] > current) {
            values[j + 1] = values[j];
            --j;
        }
        values[j + 1] = current;
    }

    for (int value : values) {
        cout << value << " ";
    }
    return 0;
}
