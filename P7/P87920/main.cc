#include <iostream>
#include <vector>
using namespace std;

const string AFFIRMATION = "YES";
const string DENIAL = "NO";

string scalar_product(int n) {   
    int sum = 0;
    vector <int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
        sum += v[i];
    } 
    for (int i = 0; i < n; ++i) 
        if (sum - v[i] == v[i]) return AFFIRMATION;
    
    return DENIAL;
}

int main () {
    int n;
    while (cin >> n) {
        cout << scalar_product(n) << endl;
    };
}