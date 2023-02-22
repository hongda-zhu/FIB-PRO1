#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool sortDec (int a, int b) {
    return a > b;
}

int main () {
    int x;
    while (cin >> x){
        vector <int> even;
        vector <int> odd;
        while (x != 0){
            if (x%2 == 0) even.push_back(x);
            else odd.push_back(x);
            cin >> x;
        }
        sort (even.begin(), even.end());
        sort (odd.begin(), odd.end(), sortDec);
        bool primer = true;
        for (int i = 0; i < even.size(); ++i) {
            if (not primer) cout << ' ';
            cout << even[i];
            primer = false;
            }
        cout << endl;
        primer = true;
        for (int i = 0; i < odd.size(); ++i) {
            if (not primer) cout << ' ';
            cout << odd[i];
            primer = false;
        }
        cout << endl;
        }
    }