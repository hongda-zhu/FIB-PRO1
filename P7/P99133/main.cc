#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string>seq(n);
    
    for (int i = seq.size() - 1; i >= 0; --i) 
        cin >> seq[i];
    
    for (int j = 0; j < n; ++j) {
        string seqStr = seq[j];
        
        for (int k = seqStr.length() - 1; 0 <= k; --k) 
            cout << seqStr[k];

        cout << endl;
    }
}