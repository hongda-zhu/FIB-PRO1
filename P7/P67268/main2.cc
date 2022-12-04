#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    while (cin >> n) {
        vector<int> seq(n);

        for (int i = n - 1; i > -1; --i) 
            cin >> seq[i];

        for (int j = 0; j < n; ++j)
        {
            if (j != 0) cout << ' ';
            cout << seq[j];
        } 

        cout << endl;
    }
}