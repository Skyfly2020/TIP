#include <iostream>
#include <string>
using namespace std;

string nextS(string s) {
    string result = "";
    int count = 1;

    for (int i = 0; i < (int)s.size(); i++) {
        if (i + 1 < (int)s.size() && s[i] == s[i + 1]) {
            count++;
        } else {
            result += to_string(count);
            result += s[i];
            count = 1;
        }
    }

    return result;
}

int main() {
    string s;
    int n;

    cin >> s >> n;

    for (int step = 1; step < n; step++) {
        s = nextS(s);
    }

    cout << s << '\n';

    return 0;
}