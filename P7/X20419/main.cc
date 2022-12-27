#include <iostream>
#include <vector>
using namespace std;

const int LENGTH_ALPHABET = 'z' - 'a' + 1; 

char most_frequent_letter(const string& s) {
    // create a vector which has alphabets numbers of containers 
    vector <int> alphabets (LENGTH_ALPHABET, 0);
    
    // first looping: adding frequency of corresponding letters
    for (int i = 0; i < alphabets.size(); ++i) alphabets[s[i] - 'a'] += 1;

    // find the most frequent letter following the smallest letter is bigger, ascendent search;
    int most_frequent_value = 0;
    int most_frequent_position = 0;
    for (int i = 0; i < alphabets.size(); ++i) {
        if(alphabets[i] != 0 and alphabets[i] > most_frequent_value) {
            most_frequent_value = alphabets[i];
            most_frequent_position = i;
        }
    }

    // 'a' starting from 0 and since we are returning a char, it will automatically change the corresponding number to the char according to the ASCII order;
    return most_frequent_position + 'a';
}

int main () {
    cout.setf(ios::fixed);
    cout.precision(2);

    int n;
    double sum = 0;
    cin >> n;

    vector <string> v(n);
    string s;

    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
        sum += v[i].length();
    }
    cout << sum/n << endl;
    
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ": " << most_frequent_letter(v[i]) << endl;
    }
}