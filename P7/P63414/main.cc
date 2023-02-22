#include <iostream>
#include <vector>
using namespace std;

const int K = 1000000000;
const int SIZE = 1001;

// pre: vector
// post: adding the value into the corresponding value of the direction
void adding_frequency (vector <int> &v) {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        ++v[x%10000];
    }
}

void print_frequency (const vector <int> &v) {
    for (int n = 0; n < v.size(); ++n) {
        if(v[n] != 0) cout << K+n << " : " << v[n] << endl;
    }
}

int main () {
    vector <int> v (SIZE, 0);
    adding_frequency (v);
    print_frequency (v);
}