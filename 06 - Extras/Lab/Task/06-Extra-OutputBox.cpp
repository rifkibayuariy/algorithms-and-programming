/*
* Extra - Ouput Box
* Author: Rifki Bayu Ariyanto
*
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    string text, horizontal_line;

    cout << "input: ", getline(cin, text);
    
    for (int i = 0; i < text.length() + 2; i++) horizontal_line += char(196);

    cout << char(218) << horizontal_line << char(191) << endl;
    cout << char(179) << " " << text << " " << char(179) << endl;
    cout << char(192) << horizontal_line << char(217) << endl;

    cout << endl, system("pause");

    return 0;
}