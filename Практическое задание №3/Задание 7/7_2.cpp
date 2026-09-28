#include <iostream>

bool clb(int h, int a, int b) {
    if (a >= h) {
        return true;
    }
    if (a <= b) {
        return false;
    }
    return true;
}

int days(int h, int a, int b) {
    int day = 0;
    while (h > 0) {
        day += 1;
        h -= a;
        if (h <= 0) {
            break;
        }
        h += b;
    }
    return day;
}

int main() {
    int h, a, b;
    std::cin >> h >> a >> b;

    if (clb(h, a, b) == false) {
        std::cout << "Улитка никогда не доползет до вершины";
        return 0;
    }

    std::cout << days(h, a, b);

    return 0;
}
