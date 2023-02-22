#include <iostream>
#include <vector>
using namespace std;

int solidpoints (int n){
    int counter = 0;
    int past2, past1, now;
    cin >> past2 >> past1;
    for (int i = 2; i < n; ++i) {
        cin >> now;
        if (now > past1 and now > past2) ++counter;
        past2 = past1;
        past1 = now;
    }
    return counter;
}

int main () {
    int n;
    cin >> n;
    int max_point = -1;
    string max_str = "a";
    string prev_str;
    while(cin >> prev_str) {
        int prev_point = solidpoints(n);
        cout << prev_str << ": " << prev_point << endl;
        if (prev_point > max_point or (prev_point == max_point and prev_str < max_str)) {
            max_str = prev_str;
            max_point = prev_point;
        }
    }
    cout << "----------" << endl;
    if(max_point == -1) cout << "no hay equipos" << endl;
    else cout << max_str << ": " << max_point << endl; 
    
}