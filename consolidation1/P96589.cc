#include <iostream>
using namespace std;

int main(){
    char n;
    cin >> n;
    bool hotel = int(n) >= 'a' and int(n) <= 'z';
    bool trivago = int(n) >= 'A' and int(n) <= 'Z';

    if (int(n) >= '0' and int(n) <= '9') cout << "digit" << endl;
    else if (hotel or trivago) cout << "lletra" << endl;
    else cout << "res" << endl;

}