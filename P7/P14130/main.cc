#include <iostream>
#include<vector>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> seq(n);

    for (int i = 0; i < n; ++i) 
        cin >> seq[i];
    
    int count = 0;

    for (int j = 0; j < n - 1; ++j) 
        if(seq[j] == seq[n - 1]) ++count;
    
    cout << count << endl;
}