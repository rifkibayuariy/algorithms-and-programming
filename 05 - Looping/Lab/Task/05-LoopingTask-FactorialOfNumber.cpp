/*
* Looping Task - Factorial of a Number
* Author: Rifki Bayu Ariyanto
*
*/

#include <iostream>

using namespace std;

int main() {
    int number;
    long long int factorial = 1;

    cout << "\n\t+---------------------------+" << endl;
    cout << "\t|    Factorial of Number    |" << endl;
    cout << "\t+---------------------------+" << endl;
    cout << "\tPlease input a number : ", cin >> number;

    bool positive = number >= 0 ? true : false;
    for (int i = 1; i <= number; i++)
        factorial *= i;

    cout << "\t+---------------------------+" << endl;
    cout << "\t" << number << "!: ";
    if (positive)
        cout << factorial << endl;
    else {
        cout << "Not defined for negative numbers" << endl;
    }

    cout << "\n\t", system("pause");
    return 0;
}