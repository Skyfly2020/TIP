#include <iostream>

int main() {
    double x, y;
    int day = 1;
    std::cout << "Введите X и Y:";
    std::cin >> x >> y;

    if (x >= y) {
        std::cout << day;
        return 0;
    }

    do {
        x *= 1.1;
        day++;
    } while (x < y);

    std::cout << day;
    return 0;
}