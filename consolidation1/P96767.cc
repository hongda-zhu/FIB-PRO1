#include <iostream>
using namespace std;

int main() {

    cout.setf(ios::fixed);
    cout.precision(4);

    double x;
    cin >> x;

    double n;
    int exp = 1;
    double sum = 0;
    double pow = 1;
    while (cin >> n) {
        sum += pow*n;
        ++exp;
        pow *= x;
        }
    cout << sum << endl;
}