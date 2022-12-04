#include <iostream>
using namespace std;

bool is_palindromic (int n) {
    int cap = n;
    int cua = 0;
    while (n > 0){
        cua = cua*10 + n%10;
        n /= 10;
    }
    if (cap == cua) return true;
    else return false;
}

int main() {
    int n;
    while (cin >> n) 
        cout << is_palindromic(n) << endl;
}
