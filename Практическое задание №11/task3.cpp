#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K, L;
    cin >> N >> K >> L;

    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    sort(a.rbegin(), a.rend());

    long long sum = 0;
    int taken = 0;

    for (int i = 0; i < N && taken < K; i++) {
        int use = min(L, K - taken);
        sum += (long long)a[i] * use;
        taken += use;
    }

    cout << sum << endl;
    return 0;
}