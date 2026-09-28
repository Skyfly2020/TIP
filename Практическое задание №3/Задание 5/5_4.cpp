#include <iostream>

class Clock {
    int h, m, s;

public:
    Clock(int n) {
        h = (n / 3600) % 24;
        m = (n % 3600) / 60;
        s = n%60;
    }

    void time() {
        std::cout << h << ":";
        
        if (m < 10) {
            std::cout << "0";
        }
        std::cout << m << ":";

        if (s < 10) {
            std::cout << "0";
        }
        std::cout << s << "\n";
    }
};

int main() {
    int n;
    std::cin >> n;

    Clock clock(n);
    clock.time();

    return 0;
}
