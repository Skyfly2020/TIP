#include <iostream>

int main() {
    int h, a, b;
    int z = 0;
    std::cin >> h >> a >> b;

    if (a < h && a <= b) {
        std::cout << "Улитка никогда не доползет до вершины";
        return 0;
    }

    while (h > 0) {
        z += 1;
        h -= a;
        if (h <= 0) {
            break;
        }
        h += b;
    }

    std::cout << z;
    return 0;
}
