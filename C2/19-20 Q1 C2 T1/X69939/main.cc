#include <iostream>
using namespace std;

int time_lapse(int time_1, int time_2){
    if (time_2 < time_1) time_2 += 60;
    if (time_2 == time_1) return 60;
    return time_2 - time_1;
}

int main () {
    int n,m;
    cin >> n >> m;
    bool same = true;
    bool primer = true;
    int old_standard = 0;
    while (same and m != -1) {
        int new_standard;
        new_standard = time_lapse(n,m);
        if (not primer and (old_standard != new_standard)) same = false; 
        old_standard = new_standard;
        n = m;
        cin >> m;
        primer =false;
    }
    if (same) cout << old_standard << endl;
    else cout << 0 << endl;

}