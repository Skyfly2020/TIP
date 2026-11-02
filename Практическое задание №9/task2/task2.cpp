#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream in1("input1.txt");
    std::ifstream in2("input2.txt");
    std::ofstream out("output.txt");

    std::string X, Y;
    in1 >> X;
    in2 >> Y;

    if (X.find(Y) == std::string::npos) {
        out << "no";
    } else {
        out << "yes";
    }
    return 0;
}