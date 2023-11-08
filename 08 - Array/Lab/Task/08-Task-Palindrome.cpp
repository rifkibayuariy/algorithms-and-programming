/*
* Task - Palindrome
* Author: Rifki Bayu Ariyanto
*
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	string text;
	bool palindrome = true;
	cout << "Input: ", getline(cin, text);

	int text_length = text.length();
	for (int i = 0; i < text_length; i++)
		if (text[i] != text[text_length - i - 1]) palindrome = false;

	cout << (palindrome ? "palindrom" : "bukan palindrom") << endl;

	cout << endl, system("pause");
	return 0;
}
