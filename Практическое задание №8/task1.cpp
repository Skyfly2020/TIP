#include <iostream>

long long step(long long base, long long n) {
    long long result = 1;

    while (n > 0) {
        if (n % 2 == 1) {
            result *= base;
        }

        n /= 2;
        if (n > 0) {
            base *= base;
        }
    }

    return result;
}

long long recurse(long long base, long long n) {
    if (n == 0) {
        return 1;
    }

    long long half = recurse(base, n / 2);
    long long result = half * half;

    if (n % 2 == 1) {
        result *= base;
    }

    return result;
}

int main() {
    long long base, n;
    std::cin >> base >> n;
    std::cout << step(base, n) << '\n';
    std::cout << recurse(base, n) << '\n';
    return 0;
}
