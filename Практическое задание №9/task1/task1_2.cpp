#include <iostream>
#include <fstream>
#include <cctype>

int main() {
    std::ifstream in("input.txt");
    std::ofstream out("output.txt");

    std::string bad = "useragreement";
    std::string text = "";
    char c;

    while (in.get(c)) {
        text += c;
    }

    std::string result = "";
    for (int i = 0; i < text.size(); i++) {
        char low = std::tolower(text[i]);
        bool found = false;

        for (int j = 0; j < bad.size(); j++) {
            if (bad[j] == low) {
                found = true;
            }
        }

        if (found == false) {
            result += text[i];
        }
    }

    out << result;

    return 0;
}