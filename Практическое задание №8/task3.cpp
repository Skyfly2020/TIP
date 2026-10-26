#include <iostream>

void move(int n, int from, int to, int spare) {
    if (n <= 0) {
        return;
    }

    move(n - 1, from, spare, to);

    std::cout << "Ingredient " << n << " move from "
              << from << " to " << to << '\n';

    move(n - 1, spare, to, from);
}

int main() {
    int n;

    move(n, 1, 3, 2);
    return 0;
}
