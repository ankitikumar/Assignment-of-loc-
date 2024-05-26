#include <iostream>
#include <cctype>
using namespace std;

void countCharacters(const string& str, int& alphabets, int& digits, int& specialChars) {
    alphabets = 0;
    digits = 0;
    specialChars = 0;

    for (char ch : str) {
        if (isalpha(ch)) {
            alphabets++;
        } else if (isdigit(ch)) {
            digits++;
        } else {
            specialChars++;
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int alphabets, digits, specialChars;
    countCharacters(str, alphabets, digits, specialChars);

    cout << "Number of alphabets: " << alphabets << endl;
    cout << "Number of digits: " << digits << endl;
    cout << "Number of special characters: " << specialChars << endl;

    return 0;
}
