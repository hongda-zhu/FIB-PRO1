#include <iostream>
#include <vector>
using namespace std;


double scalar_product(const vector<double>& u, const vector<double>& v) {   
    double res;
    for (int i = 0; i < u.size(); ++i) {
        res += v[i] * u[i];
    }
    return res;
}

int main () {
    int n;
    cin >> n;

    vector <double> u(n);
    vector <double> v(n);

    for (int i = 0; i < u.size(); ++i) cin >> u[i];
    for (int j = 0; j < v.size(); ++j) cin >> v[j];

    cout << scalar_product(u, v) << endl;
}