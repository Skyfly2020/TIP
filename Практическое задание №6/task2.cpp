#include <iostream>

void task1() {
    int n;
    int m;
    int w;
    std::cin >> n >> m >> w;

    int field[32][32] = {};

    for (int k = 0; k < w; ++k) {
        int x;
        int y;
        std::cin >> x >> y;
        field[x - 1][y - 1] = 1;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (field[i][j] == 1) {
                std::cout << '*';
            }
            else {
                int count = 0;

                for (int di = -1; di <= 1; ++di) {
                    for (int dj = -1; dj <= 1; ++dj) {
                        if (di == 0 && dj == 0) {
                            continue;
                        }

                        int x = i + di;
                        int y = j + dj;

                        if (x >= 0 && x < n &&
                            y >= 0 && y < m &&
                            field[x][y] == 1) {
                            ++count;
                        }
                    }
                }

                std::cout << count;
            }
        }

        std::cout << '\n';
    }
}

int main() {
    int variant;
    std::cout << "1 способ\n";
    std::cin >> variant;

    if (variant == 1) {
        task1();
    }

    return 0;
}
