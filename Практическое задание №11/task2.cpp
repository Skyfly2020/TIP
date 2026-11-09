#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, D;
vector<int> a;

bool can(int X) {
    int days = 1;
    int start = 0;

    for (int i = 1; i < N; i++) {
        if (a[i] - a[start] > X) {
            days++;
            start = i;
            if (days > D) return false;
        }
    }
    return days <= D;
}

int main() {
    cin >> N >> D;
    a.resize(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int lo = 0;
    int hi = a[N-1] - a[0];
    int answer = hi;

    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (can(mid)) {
            answer = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    cout << answer << endl;
    return 0;
}