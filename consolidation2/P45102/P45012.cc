#include <iostream>
using namespace std;

int math () {
    char c;
    cin >> c;

    if (c == '(') {
        int left = math ();
        cin >> c;
        if (c == '+') return left + math() + math();
        if (c == '-') return left - math() + math();
        if (c == '*') return left * math() + math();
    }
    if (c == ')') return 0;

    return c - '0';
}

int main () {
    cout << math() << endl;
}