#include <iostream>
#include <vector>

using namespace std;

int evaluate(const vector<int>& P, int x){
    int r = 0;
    for (int i = P.size() - 1; i >= 0; --i) {
        r = r*x + P[i];
        cout << "r: " << r << endl;
        cout << "x: " << x << endl;
        cout << "P[i]: " << P[i] << endl;
        cout << "-----" << endl;
    } 
    return r;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> P(n);
        for (int i = 0; i < n; ++i) cin >> P[i];
        int x;  cin >> x;
        cout << evaluate(P,x) << endl;
    }
}