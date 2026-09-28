#include <iostream>
#include "zaga.h"

int main() {
    int h, a, b;
    std::cin >> h >> a >> b;

    if (clb(h, a, b) == false) {
        std::cout << "Улитка никогда не доползет до вершины" << std::endl;
        return 0;
    }

    std::cout << days(h, a, b) << std::endl;

    return 0;
}
