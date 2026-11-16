#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);

    int balance = 0;

    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '(') {
            balance++;
        } else if (s[i] == ')') {
            balance--;
            if (balance < 0)
                break;
        }
    }

    if (balance == 0)
        std::cout << "yes";
    
    else
        std::cout << "no";
    return 0;
}