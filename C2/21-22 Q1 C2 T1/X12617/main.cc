#include <iostream>
#include <vector>
using namespace std;

// Pre: dos palabras minúsculas; un entero no negativo d
// Post: retorna true si las dos palabras son d-compatibles, false en caso contrario
bool d_compatible(string s1, string s2, int d) {
    int counter = 0;
    bool compatible = s1.length() == s2.length();
    for (int i = 0; i < s1.length(); ++i) {
        if(s1[i] != s2[i]) ++counter;
    } 
    if (counter > d) return compatible = false;
    return compatible;
}

// Pre: un vector v de palabras en minúsculas; una palabra minúscula w; un entero no negativo d
// Post: retorna la primera palabra en v d-compatible con w; "--" en caso contrario
string compatible_word(const vector<string>v, string word, int d) {
    for (int i = 0; i < v.size(); ++i) {
        if(d_compatible(v[i], word, d)) return v[i];
    } 
    return "--";
}

int main () {
    int d, n;
    cin >> d >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    
    string word;
    cin >> word;
    while (word != "STOP") {
        cout << word << ": " << compatible_word(v, word, d) << endl;
        cin >> word;
    }
}