#include <iostream>

int hours(int n) {
    return (n/3600) % 24;
}
int minutes(int n) {
    return (n%3600) / 60;
}
int seconds(int n) {
    return n % 60;
}
void dop_null(int t) {
    if (t < 10) {
        std::cout << "0";
    }
    std::cout << t;
}

int main() {
    int n;
    std::cin >> n;

    int h = hours(n);
    int m = minutes(n);
    int s = seconds(n);

    std::cout << h << ":";
    dop_null(m);
    std::cout << ":";
    dop_null(s);
    std::cout << "\n";

    return 0;
}
