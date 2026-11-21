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

    for (int end = n - 1; end > 0; --end) {
        bool swapped = false;
        for (int i = 0; i < end; ++i) {
            if (values[i] > values[i + 1]) {
                swap(values[i], values[i + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }

    for (int value : values) {
        cout << value << " ";
    }
    return 0;
}
