#include <iostream>
using namespace std;

void reverse_order (string s) {
    while (cin >> s) {
        reverse_order(s);
        cout << (s) << endl;
    }
}

main () {
    string s;
    reverse_order(s);
}