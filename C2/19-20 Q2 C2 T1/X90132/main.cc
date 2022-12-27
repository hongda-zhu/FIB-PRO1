#include <iostream>
using namespace std;

int main () {
    char c;
    int a, b;
    cin >> a;
    while (a != -1) {
    cin >> c >> b;
    if (c == '+') cout << a + b << endl; 
    else if (c == '-') cout << a - b << endl;
    else if (c == '*') cout << a*b << endl;
    cin >> a;
    }
}