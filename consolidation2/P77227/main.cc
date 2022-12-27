#include <iostream>
#include <vector>

using namespace std;
string exit(int p, vector<int>& v){
    int g = v[p];
    if (v[p]+p < 0) return "left";
    else if (v[p]+p >= v.size()) return "right";
    else if (v[p] == 0) return "never";
    v[p] = 0;
    return exit(g+p, v);
}