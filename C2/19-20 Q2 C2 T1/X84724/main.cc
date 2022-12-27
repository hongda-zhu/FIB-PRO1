#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int h = 0;
    int m = 0;
    int s = 0;
    int HH, MM, SS;
    char c;
    for (int i = 0; i < n; i++) {
        cin >> HH >> c >> MM >> c >> SS;
        h += HH;
        m += MM;
        s += SS;
    }

    if (s >= 60) {
        m += s/60;
        s %= 60;
    }

    if (m >= 60) {
        h += m/60;
        m %= 60;
    } 

    cout << h << "H " << m << "M " << s << "S" << endl; 
}