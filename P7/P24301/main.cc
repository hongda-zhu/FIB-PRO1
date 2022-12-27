#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenation(const vector<int>& v1, const vector<int>& v2) {
    vector<int> res(v1.size() + v2.size());
    for (int i = 0; i < v1.size(); ++i) res[i] = v1[i];
    for (int j = 0; j < v2.size(); ++j) res[v1.size() + j] = v2[j];
    return res;
}

int main () {
    int n, m;
    cin >> n >> m;
    vector <int> v1(n, 0);
    vector <int> v2(m, 0);
    for (int i = 0; i < n; ++i) cin >> v1[i];
    for (int i = 0; i < m; ++i) cin >> v2[i];

    vector<int> out = concatenation(v1, v2);
    
    for (int i = 0; i < out.size(); ++i) cout << out[i] << ' ';

    cout << endl;
}