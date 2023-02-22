#include <iostream>
using namespace std;

int reverse_order (string s, int max) {
    if(cin >> s and max > 0) {
        int num = reverse_order(s, max);
        if(max - 1 > num) {
            cout << s << endl;
            return num + 1;
        }
    }
    return 0;
}

int main () {
    int max;
    cin >> max;
    string s;
    reverse_order(s, max);
}