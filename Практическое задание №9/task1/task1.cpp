#include <iostream>
#include <fstream>
#include <cctype>

int main() {
    std::ifstream in("input.txt");
    std::ofstream out("output.txt");

    std::string bad = "useragreement";
    char c;

    while (in.get(c)) {
        char low = std::tolower(c);
        if (bad.find(low) == std::string::npos) {
            out << c;
        }
    }

    return 0;
}