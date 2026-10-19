#include <iostream>

void task1() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int s = i + j;
            if (s < n - 1) {
                std::cout << 0;
            }
            else if (s == n - 1) {
                std::cout << 1;
            }ф
            else {
                std::cout << 2;
            }

            if (j + 1 < n) std::cout << ' ';
        }
        std::cout << '\n';
    }
}

void task2() {
    int n;
    std::cin >> n;

    int i = 0;
    while (i < n) {
        int j = 0;
        while (j < n) {
            if (i + j < n - 1) {
                std::cout << 0;
            }
            else if (i + j == n - 1) {
                std::cout << 1;
            }
            else {
                std::cout << 2;
            }

            if (j + 1 < n) std::cout << ' ';
            ++j;
        }
        std::cout << '\n';
        ++i;
    }
}

int main() {
    int variant;
    std::cout << "1 способ\n2 способ\n";
    std::cin >> variant;

    if (variant == 1) {
        task1();
    }
    else if (variant == 2) {
        task2();
    }

    return 0;
}
