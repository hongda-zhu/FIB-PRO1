#include <iostream>
using namespace std;

char encoded(char c, int k) {
    if (c >= 'a' && c <= 'z') 
        return 'A' + (c - 'a' + k) %26;
    else if(c == '_' ) return c = ' ';
    else return c;
}

int main () {
	int k;
    while (cin >> k) {
        char c;
        bool end = false;
        while (not end and cin >> c) {
            if(c != '.') cout << encoded(c, k);
            else end = true; 
        }
        cout << endl; 
    }
}