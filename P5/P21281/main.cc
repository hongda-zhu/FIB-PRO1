#include <iostream>
using namespace std;

void factor(int n, int& f, int& q) {
    q = 0;
    for(int i = 2; i*i <= n; ++i) {
        int counter = 0;
        while(n%i == 0){
            counter += 1;
            n /= i;
        }
        if(counter > q) {
            f = i;
            q = counter;
        }
    }
    if(f == -1 and q == 0){
        f = n;
        q = 1;
    }
};

int main() {
    int n;
    while (cin >> n) {
        int f = -1, q = 1000;
        factor(n, f, q);
        cout << f << ' ' << q << endl;
    }
}
