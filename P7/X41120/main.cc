#include <iostream>
#include <vector>
using namespace std;

// obtains peaks vector but with space
vector<int> obtain_peaks(const vector<int>& v) {
    vector<int> peaks(v.size());
    for (int i = 1; i < v.size() - 1; ++i) {
        if (v[i] > v[i - 1] and v[i] > v[i + 1]) 
            peaks[i] = v[i];
    }
    return peaks;
};

int main () {
    // size of vector
    int n;
    cin >> n;

    // vector
    vector<int> v (n);
    for(int i = 0; i < n; ++i) cin >> v[i];

    // calculate peaks and saving into a new vector
    vector<int> peaks = obtain_peaks(v);

    // output's first lane => find firstly the last_pos of vector and find the size of the vector;
    int count =  0;
    int last_pos = 0;
    for (int i = 0; i < peaks.size(); ++i) {
        if (peaks[i] != 0) {
            ++count;
            last_pos = i;
        }
    }
    
    // print output's first lane => 4: 880 990 700 405
    cout << count << ":";
    for (int i = 0; i < peaks.size(); ++i) {
        if (peaks[i] != 0) {
            cout << ' ' << peaks[i];
        }
    }
    cout << endl;
    
    // print output's second lane => - and all other peaks[i] that is greater than last peaks[peaks.size()]
    bool found = false;
    bool first = true;
    for (int i = 0; i < peaks.size(); ++i) {
        if(peaks[i] > peaks[last_pos]) {
            if (not first) cout << ' ';
            cout << peaks[i];
            found = true;
            first = false;
        }
    }
    if (not found) cout << "_";
    cout << endl;
}