#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream in("input.txt");
    std::ofstream out("output.txt");

    std::string s;
    std::getline(in, s);

    std::string result = "";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            long long num = 0;
            while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i--;

            if (num == 0) {
                result += '0';
            } else {
                std::string bin = "";
                while (num > 0) {
                    bin = char('0' + num % 2) + bin;
                    num = num / 2;
                }
                result += bin;
            }
        } else {
            result += s[i];
        }
    }

    out << result;

    return 0;
}