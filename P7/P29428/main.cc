#include <iostream>
#include <vector>
using namespace std;

bool contain(string s1, string s2){
    int size1 = s1.size();
    int size2 = s2.size();

    if(size2 > size1) return false;

    for (int i = 0; i <= size1 - size2; ++i) {
        int j = 0;
        bool equal = true;
        while (equal and j < size2) {
            if (s1[i + j] != s2[j]) equal = false; // continuida, si retornamos en aquí no llegaremos al final del loop
            if (equal) ++j; // solo increase cuando equal es true, ya que sino no tiene sentido, rompemos el loop
        }
        if (j == size2) return true;
    }
    return false;
}

int main () {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < v.size(); ++i) cin >> v[i];
    
    // print result
    for (int i = 0; i < v.size(); ++i) {
        // print number:
        cout << v[i] << ':';
        // print contain:
        for(int j = 0; j < v.size(); ++j) 
            if (contain(v[i], v[j])) cout << ' ' << v[j];
        cout << endl;
    }
}