#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        for (int j = n - 1; 0 <= j; --j)
        {  
            if(j != n - 1) cout << ' ';
            cout << v[j];
        }
        cout << endl;
    }
}