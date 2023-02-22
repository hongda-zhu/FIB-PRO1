#include <iostream>
using namespace std;

void infoSequence(int& max, int& lpos) {
    int n;
    int pos = 1;
    max = 0;
    while (cin >> n and n != 0) {
        if (n >= max) {
            max = n;
            lpos = pos;
        }
        ++pos;
    }
}

void findSequence(const int& m, int &lpos) {
    int n; 
    int pos = 0;
    lpos = 0;
    while (cin >> n and n != 0) {
        ++pos;
        if (n == m) {
            lpos = pos;
            return;
        }
    }
}

int main () {
    int max, lpos, lpos2;
    infoSequence(max,lpos);
    findSequence(max,lpos2);
    cout << max << ' ' << lpos << ' ';
    if (lpos2 != 0) cout << lpos2 << endl;
    else cout << '-' << endl;
}