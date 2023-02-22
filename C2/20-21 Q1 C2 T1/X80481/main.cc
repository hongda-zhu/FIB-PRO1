#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int counter = 0;
        int s1, s2;
        bool primer = true;
        cin >> s1 >> s2;
        int s0 = s1;
        while (s2 != 0) {;
            if (primer and s1 < s2) ++counter;
            if (s1 < s0 and s1 < s2) ++counter;
            if (s1 < s0) s0 = s1;
            s1 = s2;
            cin >> s2;
            primer = false;
        }
        cout << counter << endl;
    }
}