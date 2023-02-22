#include <iostream>
using namespace std;
void converge(int n, int& k, int& far){
    while (n != 1) {
        if (n % 2 == 0) n /= 2;
        else n = 3*n + 1; 

        if (n > far) far = n;
        ++k;
    }
}
int main () {
    int m, p;
    cin >> m >> p;

    int max_far = 0;
    for (int i = 1; i < p; ++i) {
        int k = 0;
        int far = i;
        converge(i, k, far);

        // cout << "k: " << k << endl;
        // cout << "i: " << i << endl;
        // cout << "far: " << far << endl;
        // cout << "------ " << endl;
        if (k >= m) cout << i << endl;
        if (far > max_far) max_far = far;
    }

    cout << "The greatest reached number is " << max_far << endl;
    
}