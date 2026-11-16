#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

stack<int> st;
stack<int> mins;

void push(int x) {
    st.push(x);
    if (mins.empty())
        mins.push(x);
    else
        mins.push(min(x, mins.top()));
}

void pop() {
    mins.pop();
    st.pop();
}

bool empty() {
    return st.empty();
}

int getMin() {
    return mins.top();
}

int main() {
    push(5);
    push(3);
    push(7);
    cout << getMin() << "\n";
    pop();
    cout << getMin() << "\n";
    pop();
    cout << getMin() << "\n";
    cout << empty() << "\n";
    pop();
    cout << empty() << "\n";
    return 0;
}