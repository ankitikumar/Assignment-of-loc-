#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void countVowelsAndConsonants(const string& str, int& vowels, int& consonants) {
    vowels = 0;
    consonants = 0;

    for (char ch : str) {
        if (isalpha(ch)) {
            if (isVowel(ch)) {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowels, consonants;
    countVowelsAndConsonants(str, vowels, consonants);

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}
