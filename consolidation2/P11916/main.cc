#include <iostream>
using namespace std;

double to_the_e(int n){
    if (n < 0) return 0;
    if (n == 0) return 1;

    double fact = 1;
    for (int i = 1; i <= n; ++i) fact *= i;
    return to_the_e(n-1) + 1/fact;
    }

int main () {
    cout.setf(ios::fixed);
    cout.precision(10);
    int n;
    while(cin >> n){
    cout << "With " << n << " term(s) we get " << to_the_e(n-1) << '.' << endl;
    }
}