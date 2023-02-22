#include <iostream>
#include <vector>
using namespace std;

void calcula_posicions (const vector<double>& v, int& p, int& q) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        if (v[i] > v[p]) p = i;
    }
    for (int i = 0; i < p; ++i){
        if (v[i] > v[q]) q = i;
    }
}
int main () {
    cout. setf ( ios :: fixed );
    cout. precision (6);

    int n; 
    while (cin >> n) {
        vector <double> v (n);
        for (int i = 0; i < n; ++i) cin >> v[i];

        int p = 0;
        int q = 0;
        calcula_posicions(v,p,q);
        double total = 0;
        for (int i = q; i <= p; ++i) {
            total += v[i];
        }
        cout << total/(p - q + 1) << endl;
    }
}
