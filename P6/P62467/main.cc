#include <iostream>
using namespace std;

const char ASTERISK = '*';

void calc (int n) {
    if(n == 1)  cout << ASTERISK << endl;
    else {
        calc(n - 1);  
        for(int i = 0; i < n; ++i) cout << ASTERISK;
        cout << endl;
        calc(n - 1);
    }
}

int main () {
    int n;
    cin >> n;
	calc(n);
}