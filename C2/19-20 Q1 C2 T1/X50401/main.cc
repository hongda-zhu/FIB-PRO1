#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n; 
    cin >> n;
    int total = 0;
    
    for (int i = 0; i < n; ++i) {
        int counter;
        cin >> counter;
        int count = 0;
        vector <int> v (counter);
        for (int j = 0; j < v.size(); ++j) {
            cin >> v[j];
        }
        for (int k = 1; k < v.size() - 1; ++k) {
            if (v[k] == v[k+1] + v[k-1]) ++count;
        }
        cout << count << endl;        
        total += count;
    }
    cout << "Total: " << total << endl;
}

