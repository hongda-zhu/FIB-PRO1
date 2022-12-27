#include <iostream>
#include <vector>
using namespace std;

int common_elements(const vector<int>& X, const vector<int>& Y) {
    int x_size = X.size();
    int y_size = Y.size();
    int counter = 0;
    int j = 0;
    int i = 0;
    while (i < X.size() and j < Y.size()) {
        if (X[i] > Y[i]) 
            ++j;

        if (X[i] < Y[j]) 
            ++i;

        if (X[i] == Y[j]){
            ++j;
            ++i;
            ++counter;
        }
    }
    return 0;
}

int main () {
    int n, m;
    cin >> n;
    cin >> m;

    vector<int> X (n);
    for(int i = 0; i < X.size(); ++i) cin >> X[i];

    vector<int> Y (n);
    for(int i = 0; i < Y.size(); ++i) cin >> Y[i];

    cout << common_elements(X, Y) << endl;
}