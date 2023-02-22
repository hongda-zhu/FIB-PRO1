#include <iostream>
using namespace std;

const int PEAK = 3143;

int main () {
    int a, b, c, aux;
    bool found = false;
    cin >> c;
    a = b = aux = c;
    while (c != 0 and cin >> c) {
        a = b;
        b = aux;
        aux = c;
        if(c != 0 and a < b and b > c and b > PEAK) found = true;
    }
    if(found) cout << "YES" << endl;
    else cout << "NO" << endl;
}   