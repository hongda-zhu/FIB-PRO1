#include <iostream>
#include <vector>
using namespace std;

bool pattern_match(string s1, string s2) {
    bool dot = false;
    int i = 0;
    if (s1.length() > s2.length() + 1) return false;
    while (not dot){
        if (s1[i] == '*') dot = true;
        if (not dot and s1[i] != s2[i]) return false;
        ++i;
    }

    i = s1.size() - 1;
    int j = s2.size() - 1;
    dot = false;
    
    while (not dot) {
        if (s1[i] == '*') dot = true;
        if (not dot and s1[i] != s2[j]) return false;
        --i;
        --j;
    }
    return true;
}

int main() {
    string s1;
    while (cin >> s1){
        int n;
        cin >> n;
        cout << s1 << ':' << endl;
        string s2;
        for (int i = 0; i < n; ++i){
            cin >> s2;
            if (pattern_match(s1,s2)) cout << "    " << s2 << endl;
        }
    }
}