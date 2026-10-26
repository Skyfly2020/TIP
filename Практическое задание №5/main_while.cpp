#include <iostream>

int main() {
    double x, y;
    std::cout << "Введите X и Y:";
    std::cin >> x >> y;

    int day = 1;

    while (x< y) {
        x *= 1.1;
        day++;
    }

    std::cout << day;
    return 0;
}