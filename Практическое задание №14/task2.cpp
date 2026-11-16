#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <cctype>
using namespace std;

int main() {
    string text, w;
    set<string> seen;
    getline(cin, text);

    string punct = ".,!?;:—–\"'()[]{}«»…";
    for (char &c : text) {
        if (punct.find(c) != string::npos)
            c = ' ';
        else
            c = tolower(c);
    }
    cout << text << "\n";

    stringstream text2(text);

    while (text2 >> w) {
        if (seen.find(w) == seen.end()) {
            seen.insert(w);
            cout << w << "\n";
        }
    }
    return 0;
}