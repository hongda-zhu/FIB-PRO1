#include <iostream>
using namespace std;

int handleGCD (int n1, int n2) {
    while (n1 != n2) {
        if(n1 > n2) n1 -= n2;
        else n2 -= n1;
    }
    return n1;
}

void read_rational(int& num, int& den) {
    char x;
    int gcd;
    cin >> num >> x >> den;
    gcd = handleGCD(num, den);
    num /= gcd;
    den /= gcd;
};

int main() {
    int num, den;
    read_rational(num , den);
    cout << num << ' ' << den << endl;
}