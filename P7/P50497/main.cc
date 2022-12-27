#include <iostream>
#include <vector>
using namespace std;

bool is_palindrome(const string& s) {   
    bool res = true;
    for (int i = 0; i < s.length()/2; ++i) {
        if(s[i] != s[s.length() - i - 1]) return false;
    }
    return res;
}

int main () {
    string s;
    while (cin >> s) {
        cout << is_palindrome(s) << endl;
    };
}