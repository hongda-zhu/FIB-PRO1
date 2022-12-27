#include <iostream>
#include <vector>
using namespace std;

vector<bool> ramps_pos(const vector<int> & V) {
    vector<bool> res(V.size(), false);
    for (int i = 0; i < V.size() - 2; ++i) {
        if((V[i + 2] > V[i + 1] and V[i + 1] > V[i]) or (V[i] > V[i + 1] and V[i + 1] > V[i + 2])) res[i] = true;
    }
    return res;
}

int pot_conflictive (const vector<bool>& B) {
    int count = 0;
    for (int i = 0; i < B.size(); i++) {
            if (B[i] == true and B[i + 1] == true) count++;
            if (B[i] == true and B[i + 2] == true) count++;
    }
    return count;
}

int main () {
    int n;
    while (cin >> n) {
        vector <int> v(n);
        for (int i = 0; i < v.size(); ++i) cin >> v[i];

        // print ramps:
        cout << "positions with a ramp:";
        vector<bool> ramps = ramps_pos(v);
        for (int i = 0; i < ramps.size(); ++i) {
            if(ramps[i] != 0) cout << ' ' << i;
        }
        cout << endl;

        // print potentially conflictive: 
        // cout << "potentially conflictive:";
        cout << "potentially conflictive: " << pot_conflictive(ramps) << endl;

        // print "___"
        cout << "__" << endl;
    }
}