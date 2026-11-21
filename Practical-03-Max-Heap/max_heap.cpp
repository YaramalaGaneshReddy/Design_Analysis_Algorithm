#include <bits/stdc++.h>
using namespace std;

bool maxHeapValidation(vector<int>&arr) {
    int n = arr.size();
    for (int i = 0; i <= n / 2 - 1; i++) {
        int leftChildIndex = 2 * i + 1;
        if (leftChildIndex < n && arr[leftChildIndex] > arr[i]) {
            return false;
        }

        int rightChildIndex = 2 * i + 2;
        if (rightChildIndex < n && arr[rightChildIndex] > arr[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout << (maxHeapValidation(arr) ? "true" : "false") << endl;
    return 0;
}