#include<iostream>
using namespace std;
main() {
    string word, newword = "";
    cout << "Enter word: ";
    getline(cin, word);
    for (int i = 0;word[i] != '\0';i++) {
        if (word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u') {
            newword = newword + word[i];

        }
    }
    cout << newword;
}