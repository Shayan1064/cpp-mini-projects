#include <iostream>
#include <string>
using namespace std;

int main() {
    string word, rev;
    cout << "Enter a word: ";
    cin >> word;

    for (int i = word.length() - 1; i >= 0; i--)
        rev += word[i];

    if (word == rev) cout << "Palindrome";
    else cout << "Not a palindrome";

    cout << endl;
    return 0;
}
