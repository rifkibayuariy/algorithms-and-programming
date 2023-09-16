/*
 * Pythagoras
 * Author: Rifki Bayu Ariyanto
 *
 * Mencari nilai sisi miring segitiga
 */

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float alas, tinggi, miring;

    // Display information about program
    cout << "+------------------------------------------------+" << endl;
    cout << "|  [] Pythagoras Calculator                      |" << endl;
    cout << "+------------------------------------------------+" << endl;
    cout << "|  Program ini digunakan untuk menghitung nilai  |" << endl;
    cout << "|  sisi miring segitiga                          |" << endl;
    cout << "+------------------------------------------------+" << endl;
    cout << "Silahkan masukan nilai" << endl
         << endl;

    // console input for alas and tinggi value
    cout << "Nilai Sisi Alas : ", cin >> alas;
    cout << "Nilai Sisi Alas : ", cin >> tinggi;

    // calculation
    miring = sqrt((pow(alas, 2)) + (pow(tinggi, 2)));

    // show result to user
    cout << endl
         << "\t=> Result (Sisi Miring)" << endl;
    cout << "+-----------------------------------------------+" << endl;
    cout << "\tSisi Alas\t: " << alas << endl;
    cout << "\tSisi Tinggi\t: " << tinggi << endl;
    cout << "\tSisi Miring\t: " << miring << endl;
    cout << "+-----------------------------------------------+" << endl;
    cout << "Jadi Sisi Miring dari segitiga adalah " << miring << endl
         << endl;

    return 0;
}