#include <iostream>

class Snail {
    int h, a, b;

public:
    Snail(int height, int day, int night) {
        h = height;
        a = day;
        b = night;
    }
    bool isValid() {
        if (a >= h) {
            return true;
        }
        if (a <= b) {
            return false;
        }
        return true;
    }
    int run() {
        int z = 0;
        while (h > 0) {
            z += 1;
            h -= a;
            if (h <= 0) {
                break;
            }
            h += b;
        }
        return z;
    }
};

int main() {
    int h, a, b;
    std::cin >> h >> a >> b;

    Snail simulation(h, a, b);

    if (simulation.isValid() == false) {
        std::cout << "Улитка никогда не доползет до вершины\n";
        return 0;
    }

    std::cout << simulation.run() << "\n";

    return 0;
}
