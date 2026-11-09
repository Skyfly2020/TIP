#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<string> a;
vector<vector<bool>> was;
int best = -1;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void go(int x, int y, int collected) {
    if (a[x][y] == 'E') {
        if (collected > best) best = collected;
        return;
    }

    was[x][y] = true;

    int nowCollected = collected;
    if (a[x][y] == 'P') nowCollected++;

    for (int d = 0; d < 4; d++) {
        int nx = x + dx[d];
        int ny = y + dy[d];
        if (nx < 0 || ny < 0 || nx >= N || ny >= M) 
            continue;
        if (a[nx][ny] == '1') 
            continue;
        if (was[nx][ny]) 
            continue;
        go(nx, ny, nowCollected);
    }

    was[x][y] = false;
}

int main() {
    cin >> N >> M;
    a.resize(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    was.assign(N, vector<bool>(M, false));

    int sx = 0, sy = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (a[i][j] == 'S') { sx = i; sy = j; }

    go(sx, sy, 0);

    if (best < 0) best = 0;
    cout << best << endl;
    return 0;
}