#include <iostream>
using namespace std;

bool is_univariate(int n) {
    if(n/10 == 0) return true;
    else if (n%10 == (n/10)%10) return is_univariate(n/10);
    else return false;
}

int main () {
    int n;
    int counter = 0;
    bool found = false;
    cin >> n;
    while (not found and n != -1) {
        if(is_univariate(n)) found = true;
        ++counter;
        cin >> n;
    }
    if (found) cout << counter << endl;
    else cout << 0 << endl;
}