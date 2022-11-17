#include <iostream>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        int max, v;
        cin >> v;
        max = v;
        for (int i = 0; i < n - 1; ++i) {
            cin >> v;
            if (v > max) max = v;
        }
        cout << max << endl;
    }
}