#include <iostream>
using namespace std;

int even_digits(int n) {
    if (n == 0) return 0;
    else if (n%2 == 0) return even_digits(n/10) + n%10;
    return even_digits(n/10);
}
int main() {
    int x;
    while (cin >> x) cout << even_digits(x) << endl;
}