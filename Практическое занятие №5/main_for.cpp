#include <iostream>

int main() {
    double x, y;
    int day;
    std::cout << "Введите X и Y:";
    std::cin >> x >> y;

    for (day = 1; x < y; day++) {
        x *= 1.1;
    }

    std::cout << day;
    return 0;
}