#include <iostream>
using namespace std;

bool is_perfect(int x) {
    int sum = (x != 1);
    for (int i = 2; i*i <= x; ++i) {
        if(x%i == 0) {
            sum += x/i + i;
        }
    }
    return (sum == x);
};

int main () {
    int x;
    while (cin >> x) cout << (is_perfect(x) ? "true" : "false") << endl;
}