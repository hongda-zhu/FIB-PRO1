#include <iostream>
using namespace std;

void print_line(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "true" << endl;
    else cout << "false" << endl;
}

void handleCheckType (char c) {
    // letter
    bool isLetter = ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z'));  

    // vowel , not vowel and letter == consonant
    bool isVowel = (c == 'a' or c == 'A' or c == 'e' or c == 'E' or c == 'i' or c == 'I' or c == 'o' or c == 'O' or c == 'u' or c == 'U'); 
    
    // lowercase, not lowercase and letter == uppercase
    bool isLowercase = (c >= 'a' and c <= 'z');

    // digit
    bool isDigit = (c >= '0' and c <= '9');

    print_line(c, "letter", isLetter);
    print_line(c, "vowel", isVowel);
    print_line(c, "consonant", (isLetter and not isVowel));
    print_line(c, "uppercase", (isLetter and not isLowercase));
    print_line(c, "lowercase", isLowercase);
    print_line(c, "digit", isDigit);
}

int main () {
    char c;
    while (cin >> c) handleCheckType(c);
}