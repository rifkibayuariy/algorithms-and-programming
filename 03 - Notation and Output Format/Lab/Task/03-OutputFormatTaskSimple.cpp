/*
 * Output Format (Simple Version)
 * Author: Rifki Bayu Ariyanto
 *
 * Membuat table "Daftar Belanjaan" sesuai dengan materi yang didapatan dikelas.
 *
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "\t" << setw(26) << "Daftar Belanjaan" << endl;
    cout << "\t+----+--------------------+------+" << endl;
    cout << "\t|" << setw(5) << "NO |" << setw(21) << "Item |" << setw(7) << "Jmlh |" << endl;
    cout << "\t+----+--------------------+------+" << endl;
    cout << "\t|" << setw(3) << "01"
         << " |" << setw(19) << "Lifebuaya"
         << " |" << setw(5) << 5 << " |" << endl;
    cout << "\t|" << setw(3) << "02"
         << " |" << setw(19) << "Pisaudent"
         << " |" << setw(5) << 2 << " |" << endl;
    cout << "\t|" << setw(3) << "03"
         << " |" << setw(19) << "Minyak"
         << " |" << setw(5) << 1 << " |" << endl;
    cout << "\t+----+--------------------+------+\n\n";

    cout << "\t", system("pause");

    return 0;
}