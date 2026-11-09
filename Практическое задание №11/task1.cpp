#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> a(N, vector<int>(M));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> a[i][j];

    vector<vector<int>> dp(N, vector<int>(M, 0));
    vector<vector<int>> from(N, vector<int>(M, 0));

    dp[0][0] = a[0][0];


    for (int j = 1; j < M; j++) {
        dp[0][j] = dp[0][j-1] + a[0][j];
        from[0][j] = 1; 
    }

    for (int i = 1; i < N; i++) {
        dp[i][0] = dp[i-1][0] + a[i][0];
        from[i][0] = 0; 
    }

    for (int i = 1; i < N; i++) {
        for (int j = 1; j < M; j++) {
            if (dp[i-1][j] > dp[i][j-1]) {
                dp[i][j] = dp[i-1][j] + a[i][j];
                from[i][j] = 0;
            } else {
                dp[i][j] = dp[i][j-1] + a[i][j];
                from[i][j] = 1;
            }
        }
    }


    vector<pair<int,int>> path;
    int i = N - 1, j = M - 1;
    while (true) {
        path.push_back({i, j});
        if (i == 0 && j == 0) break;
        if (from[i][j] == 0) i--;  
        else j--;              
    }

    for (int k = (int)path.size() - 1; k >= 0; k--)
        cout << path[k].first << " " << path[k].second << "\n";

    return 0;
}