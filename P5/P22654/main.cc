#include <iostream>
using namespace std;

void decompose (int n, int& h, int& m, int& s) {
    h = n / 3600;
    n -= h*3600;
    m = n / 60;
    n -= m*60;
    s = n;
}

int main() {
    int n, h, m, s;
    while (cin >> n) {
        decompose(n, h, m, s); 
        cout << h << ' ' << m << ' ' << s << endl;
    }
}
