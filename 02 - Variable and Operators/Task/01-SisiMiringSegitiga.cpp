/*
 * Pythagoras
 * Author: Rifki Bayu Ariyanto
 *
 * Mencari nilai sisi miring segitiga
 */

#include <iostream>
#include <map>
#include <limits>
#include <math.h>

using namespace std;

int main()
{
    // Variable Declation
    float miring;
    map<string, float> segitiga{{"Alas", 0}, {"Tinggi", 0}};

    // Display information about program
    cout << "+------------------------------------------------+" << endl;
    cout << "|  [] Pythagoras Calculator                      |" << endl;
    cout << "+------------------------------------------------+" << endl;
    cout << "|  Program ini digunakan untuk menghitung nilai  |" << endl;
    cout << "|  sisi miring segitiga                          |" << endl;
    cout << "+------------------------------------------------+" << endl;
    cout << "Silahkan masukan nilai" << endl
         << endl;

    // Console Input Alas and Tinggi
    map<string, float>::iterator i;
    for (i = segitiga.begin(); i != segitiga.end(); i++)
    {
        int counter = 0;
        do
        {
            if (counter > 0)
                cout << "Mohon masukan angka lebih dari 0!" << endl;

            cout << "Nilai Sisi " << i->first << " : ", cin >> segitiga[i->first];
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            counter++;
        } while (!isdigit(segitiga[i->first]) && segitiga[i->first] <= 0);
    }

    // Calculate to find Miring Value
    miring = sqrt((pow(segitiga["Tinggi"], 2)) + (pow(segitiga["Alas"], 2)));

    cout << endl
         << "\t=> Result (Sisi Miring)" << endl;
    cout << "+-----------------------------------------------+" << endl;
    cout << "\tSisi Alas\t: " << segitiga["Alas"] << endl;
    cout << "\tSisi Tinggi\t: " << segitiga["Tinggi"] << endl;
    cout << "\tSisi Miring\t: " << miring << endl;
    cout << "+-----------------------------------------------+" << endl;
    cout << "Jadi Sisi Miring dari segitiga adalah " << miring << endl
         << endl;

    return 0;
}