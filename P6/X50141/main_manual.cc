#include <iostream>
using namespace std;

int max(int a, int b) {
    if (a < b) return b;
    else return a;
}

int fatten(int x) {
    cout << "1 => x: " << x << endl;
    cout << "-------" << endl;
    if (x < 10) return x;
    else {
        int f = fatten(x / 10);
        cout << "f: " << f << endl;
        cout << "x: " << x << endl;
        cout << "-------" << endl;
        int maximum = max(f % 10, x % 10);
        return f * 10 + maximum;
    }
}

int main() {
    int n;
    cin >> n;
    cout << fatten(n) << endl;
}