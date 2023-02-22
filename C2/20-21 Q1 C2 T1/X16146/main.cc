#include <iostream>
#include <vector>
using namespace std;

void fillvec (vector<int>&v){
    for (int i = 0; i < v.size(); ++i) 
        cin >> v[i];
}

double calc_median (const vector<int> v){
    double sum = 0;
    int counter = 0;
    for (int i = 0; i < v.size(); ++i)
        if(v[i] % 2 == 0) {
            sum += v[i];
            ++counter;
        }
    return sum/counter;
}

int find_last_match(const vector<int> v, double median) {
    for (int i = v.size() - 1; i >= 0; --i) {
        if(median > v[i]) return i;
    }
    return -1;
}

int main () {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        fillvec(v);
        double median = calc_median(v);
        int last_match = find_last_match(v, median);
        cout << last_match<< endl;
    };
}