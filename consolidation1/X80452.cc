#include <iostream>
using namespace std;

int main() {
    int n;

    while (cin >> n){
        int p = 0;
        int q = 0;
            int sum = 0;
            while (sum != n){
                if (n%7 == 0) {
                    ++p;
                    n -= 7;
                }
                else if (n%4 == 0) {
                    ++q;
                    n -= 4;
                }
                else {
                ++p;
                n-=7;
                }
                }
        cout << p << ' ' << q << endl;
        }
}