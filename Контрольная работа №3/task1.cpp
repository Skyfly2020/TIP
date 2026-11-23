#include <iostream>
#include <vector>
using namespace std;

void recur(const vector<int>& arr, int k, int start, vector<int>& current) {
    if (k == 0) {
        for (int x : current) cout << x << " ";
        cout << "\n";
        return;
    }

    for (int i = start; i < (int)arr.size(); i++) {
        current.push_back(arr[i]);
        recur(arr, k - 1, i, current);
        current.pop_back();
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    int k = 2;
    vector<int> current;

    recur(arr, k, 0, current);
    return 0;
}