/*
* Task - Reverse Sentence
* Author: Rifki Bayu Ariyanto
*
*/

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {

    vector<string> words;
    string sentence;
    
    cout << "+------------------------------+" << endl;
    cout << "|      Reverse Sentecence      |" << endl;
    cout << "+------------------------------+" << endl;

    // input text
    cout << "> input: ", getline(cin, sentence);

    cout << "+------------------------------+" << endl;

    // split sentence
    istringstream iss(sentence);
    string word;
    while (iss >> word)
        words.push_back(word);

    // output
    cout << "> output: ";
    for (int i = words.size() -1; i >= 0; i--) {
        cout << words[i];
        if (i != 0) cout << " ";
    }

    cout << endl;

    cout << endl, system("pause");
    return 0;
}