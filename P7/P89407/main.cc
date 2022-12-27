#include <iostream>
#include <vector>
using namespace std;

bool stable (int x, int y, int base) {
    int xy = x*y;
    vector <int> v1 (16, 0);
    while (x != 0) {
        // cout << "x%base: " << x%base << endl;
        // cout << "v1[x%base]: " << v1[x%base] << endl;
        ++v1[x%base];
        x /= base;
    }

    while (y != 0) {
        // cout << "y%base: " << y%base << endl;
        // cout << "v1[y%base]: " << v1[y%base] << endl;
        ++v1[y%base];
        y /= base;
    }

    vector <int> v2 (16,0);
    while (xy != 0){
        // cout << "xy%base: " << xy%base << endl;
        // cout << "v2[y%base]: " << v2[xy%base] << endl;
        ++v2[xy%base];
        xy /= base;
    }

    if (v1 == v2) return true;
    
    return false;
}

void switchbase(int n, int base) {
    if (n/base != 0) switchbase(n/base, base);
    if (n%base >= 10) cout << char(n%base - 10 + 'A');
    else cout << n%base;
}

int main () {
    int x, y;
    while (cin >> x >> y) {
        bool solution = false;
        // cout << "solutions for " << x << " and " << y << endl;
        for (int i = 2; i <= 16; ++i) {
            if (stable (x, y, i)) {
                solution = true;
                switchbase(x,i);
                cout << " * ";
                switchbase(y,i);
                cout << " = ";
                switchbase(x*y,i);
            }
            // cout << " (base " << i << ")" << endl; 
        }
    // if (not solution) cout << "cap" << endl;
    cout << endl;
    };
}