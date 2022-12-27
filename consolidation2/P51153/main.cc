#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        bool pairs = false;
        vector <int> v (n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        int j = 1;
        while (not pairs and j < n){
            if ((v[j] + v[j-1])%2 != 0) pairs = true;
            ++j;
        }
        if (pairs) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}