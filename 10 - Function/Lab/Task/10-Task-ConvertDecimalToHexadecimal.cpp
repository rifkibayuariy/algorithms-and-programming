/*
* Task - Convert Decimal to Hexadecimal
* Author: Rifki Bayu Ariyanto
*
*/

#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

string decimal_to_hexadecimal(int decimal);

int main() {

    int decimal;

    cout << "  Convert Decimal to Hexadecimal" << endl;
    for (int i = 0; i < 50; i++) cout << char(196);
    cout << endl;

    cout << " > Decimal: ", cin >> decimal;
    for (int i = 0; i < 50; i++) cout << char(196);
    cout << endl;

    cout <<" > Hexadecimal: " << decimal_to_hexadecimal(decimal) << endl;

    cout << endl, system("pause");
    return 0;
}

string decimal_to_hexadecimal(int decimal) {

    /*
    * Sebenarnya ada cara termudah untuk mengubah bilangan decimal ke hexadecimal yaitu dengan cara seperti ini
    * 
    *   int bilangan decimal = 2479;
    *   cout << hex << bilangan_decimal << endl;
    * 
    *   Output yang dihasilkan adalah
    *   9af
    */

    string hexadecimal_char = "0123456789ABCDEF";

    string hexadecimal = "";
    while(decimal > 0) {
        int sisa_bagi = decimal < 16 ? decimal : decimal % 16;
        hexadecimal = hexadecimal_char[sisa_bagi] + hexadecimal;

        decimal /= 16;
    }

    return hexadecimal;
}