#include <iostream>
using namespace std;

int main () {
    char c;
    int count = 0;
    while (cin >> c) {
        cout << "c: " << c << endl;
        cout << "---" << endl;
        if (c == 'a' or c == 'e') count += 1;
        else if (c == 's' or c == 'o') count += 2;
        else if (c == 'd' or c == 'i' or c == 'n' or c == 'r') count += 3;
        else if (c == 'c' or c == 'l' or c == 't' or c == 'u') count += 4;
        else if (c == 'm' or c == 'p') count += 5;
        else if (c == 'k' or c == 'w') count += 7;
        else count += 6;
    }
    cout << count << endl;
}