#include <iostream>
using namespace std;

int print(int n) {
    string s;
    if (cin >> s) {
        // first iteration
        int counter = print(n + 1);
        if (n < counter/2)
            cout << s << endl;
        return counter;
    }
    return n;
}

int main() {
    print(0);
}
