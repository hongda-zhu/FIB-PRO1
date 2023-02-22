#include <iostream>
#include <vector>
using namespace std;

bool es_palindrom(string s){
    int n = s.size();
    for (int i = 0; i < n/2; ++i) {
        if (s[i] != s[n-i-1]) return false;
    }
    return true;
}
int main () {
    int n;
    cin >> n;
    cout << "-----" << endl;
    while (n != 0){
        vector <string> v (n);
        int max = 0;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            if (es_palindrom(v[i]) and v[i].size() > max) max = v[i].size();
        }
        for (int i = 0; i < n; ++i) {
            if (es_palindrom(v[i]) and v[i].size() == max) cout << v[i] << endl;
        }
        if (max == 0) cout << "cap palindrom" << endl;
        cout << "-----" << endl;
        cin >> n;

    }
}