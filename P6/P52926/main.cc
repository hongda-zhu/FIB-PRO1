#include <iostream>
using namespace std;

void reverse_order (string s) {
    cin >> s;
    if(s != "end"){
        reverse_order(s);
        cout << (s) << endl;
    }
}

int main () {
    string s;
    reverse_order(s);
}