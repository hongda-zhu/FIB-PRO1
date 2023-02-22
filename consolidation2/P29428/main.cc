#include <iostream>
#include <vector>
using namespace std;

bool contain(string s1, string s2){
    int sizes1 = s1.size();
    int sizes2 = s2.size();

    if (sizes1 < sizes2) return false;

    for (int i = 0; i <= sizes1 - sizes2; ++i){
        int j = 0;
        bool equal = true;
        while (equal and j < sizes2){
            if (s1[i+j] != s2[j]) equal = false;
            if (equal) ++j;
        }
        if (j == sizes2) return true;
    }
    return false;
}

int main () {

    int n;
    cin >> n;

    vector <string> v (n);

    for (int i = 0; i < n; ++i) cin >> v[i];

    for (int i = 0; i < n; ++i){
        cout << v[i] << ":";
        for (int j = 0; j < n; ++j){
            if (contain(v[i],v[j])) cout << ' ' << v[j];
        }
        cout << endl;
    }
}