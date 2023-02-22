#include <iostream>
#include <vector>
using namespace std;

const string AFFIRMATION = "yes";
const string DENIAL = "no";

bool is_prime(int n) {
    for (int i = 2; i*i <= n; ++i) {
        if(n%i == 0) return false;
    }
    return true;
}

string pair_seq(int n) {   
    int sum = 0;
    vector <int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    } 
    for (int i = 0; i < n; ++i) 
        if (sum - v[i] == v[i]) return AFFIRMATION;
    
    return DENIAL;
}

int main () {
    int n;
    while (cin >> n) {
        vector <int> v(n);
        for(int i = 0; i < n; ++i) 
            cin >> v[i];
        
        cout << pair_seq(n) << endl;
    };
}