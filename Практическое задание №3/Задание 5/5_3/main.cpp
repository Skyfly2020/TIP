#include <iostream>
#include "clock.h"

int main() {
    int n;
    std::cin >> n;

    int h = hours(n);
    int m = minutes(n);
    int s = seconds(n);
    std::cout << h << ":";
    
    if (m<10) {
        std::cout << "0";
    }
    std::cout << m << ":";

    if (s<10) {
        std::cout << "0";
    }
    std::cout << s << "\n";

    return 0;
}
