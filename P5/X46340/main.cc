#include <iostream>
#include <cmath>
using namespace std;

int sum_min_max(int x,int y,int z) {
    return min(min(x,y),z)+max(max(x,y),z);
}

int main() {
    int x,y,z;
    while (cin >> x >> y >> z) cout << sum_min_max(x, y, z) << endl;
}
