/*
 * Output Format
 * Author: Rifki Bayu Ariyanto
 *
 * Membuat table "Daftar Belanjaan" sesuai dengan tugas, akan tetapi list datanya disimpan kedalam sebuah tempat
 * (dalam pengertianku 'array' karena terbiasa menggunakan biasa lain). Sehingga nantinya tidak usah membuat format
 * 'cout' satu-satu, yang nantinya akan memudahkan jika datanya banyak.
 *
 */

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct shopping
{
    string item;
    int qty;
};

int main()
{
    vector<shopping> shopping_list = {{"Lifebuaya", 5}, {"Pisaudent", 2}, {"Minyak", 1}};

    cout << "\t" << setw(26) << "Daftar Belanjaan" << endl;
    cout << "\t+----+--------------------+------+" << endl;
    cout << "\t|" << setw(5) << "NO |" << setw(21) << "Item |" << setw(7) << "Jmlh |" << endl;
    cout << "\t+----+--------------------+------+" << endl;

    // loop for show data from 'array' shopping_list
    for (int i = 0; i < shopping_list.size(); i++)
    {
        string no = (i < 9) ? "0" + to_string(i + 1) : to_string(i + 1);
        cout << "\t|" << setw(3) << no << " |" << setw(19) << shopping_list[i].item << " |" << setw(5) << shopping_list[i].qty << " |" << endl;
    }

    cout << "\t+----+--------------------+------+\n\n";

    cout << "\t", system("pause");

    return 0;
}