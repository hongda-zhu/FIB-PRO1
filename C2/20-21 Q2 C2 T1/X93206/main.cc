#include <iostream>
#include <vector>
using namespace std;

bool elem_exist (const vector<string>&v, string elem) {
    for (int j = 0; j < v.size(); ++j) {
        if (elem == v[j]) return true;
    }
    return false;
}

void fill_vector(vector <string> &v){
    for(int i = 0; i < v.size(); ++i) {
        string x;
        cin >> x;
        if(not elem_exist(v, x)) v[i] = x;
    }
}

int main () {
    int n;
    while (cin >> n) {
        vector <string> v (n, "aa");
        fill_vector (v);
        
        for (int i = 0; i < v.size(); ++i) {
            if (v[i] != "aa" ) cout << v[i] << endl;
        };
        cout << endl;
    }
}