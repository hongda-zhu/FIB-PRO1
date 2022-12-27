#include <iostream>
#include <vector>
using namespace std;
const int APH = 'z' - 'a' + 1;

void fillvec (vector <int> &v1, char c, int &abc) {
    if (c >= 'a' and c <= 'z'){
        ++v1[c - 'a'];
        if (v1[c - 'a'] < 2) ++abc;
    }
    else if (c >= 'A' and c <= 'Z'){
        ++v1[c - 'A'];
        if (v1[c - 'A'] < 2) ++abc;
    }
}

int main () {
    
    char c;
    while (cin >> c) {
        int abc = 0;
        vector <int> alpha (APH, 0);
        while (c != '.') {
            fillvec (alpha, c, abc);
            cin >> c;
        }
    if (abc == APH) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
}