#include <iostream>
#include <map>
using namespace std;

char decode (char c, string s) {
    int n = s.length();
    for (int i = 0; i < n; ++i) {
        if (c == s[i]) {
            char res = 'a' + i;
            return res;
        }
    }
    return ' ';
}

int main () {
    string s;
    while (cin >> s) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            string sentence;
            cin >> sentence;
            int len = sentence.length();
            for (int j = 0; j < len; ++j) {
                char c = sentence[j];
                cout << decode(c, s);
            }
            cout << endl;
        }
        cout << endl;
    }
}