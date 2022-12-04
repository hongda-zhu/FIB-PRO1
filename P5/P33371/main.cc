#include <iostream>
using namespace std;

char encoded(char c, int k) {
    if ( c == '_') return ' ';
    else if (c <= 'z' and c >= 'a') return 'A'+(c-'a'+k) % 26;
    return c;    
}

int main () {
	int k;
    while (cin >> k) {
        char c;
        cin >> c;
        while ( c != '.') {
            cout << encoded(c,k);
            cin >> c;
        }
        cout << endl;
    }
}