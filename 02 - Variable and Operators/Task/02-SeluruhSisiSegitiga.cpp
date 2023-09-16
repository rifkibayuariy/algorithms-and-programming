/*
 * Pythagoras
 * Author: Rifki Bayu Ariyanto
 *
 * Program rumus pythagoras yang bisa digunakan untuk mencari salah satu nilai sisi segitiga berdasarkan pilihan sisi yang dipilih.
 *
 * buka repository github untuk melihat beberapa versi pengerjaan
 * https://github.com/rifkibayuariy/algorithms-and-programming/tree/main/02%20-%20Variable%20and%20Operators/Task
 */

#include <iostream>
#include <string>
#include <map>
#include <limits>
#include <math.h>

using namespace std;

int main()
{
    int counter = 0;
    char selected_option;
    // container to store options
    map<char, string> options{{'A', "Alas"}, {'B', "Tinggi"}, {'C', "Miring"}};
    // container to store triangle value
    map<string, float> segitiga{{"Alas", 0}, {"Tinggi", 0}, {"Miring", 0}};

    // Display information about program
    cout << "+-----------------------------------------------+" << endl;
    cout << "|  [] Pythagoras Calculator                     |" << endl;
    cout << "+-----------------------------------------------+" << endl;
    cout << "|  Pilih salah satu sisi yang ingin dihitung :  |" << endl;
    cout << "|  (A) Sisi Alas                                |" << endl;
    cout << "|  (B) Sisi Tinggi                              |" << endl;
    cout << "|  (C) Sisi Miring                              |" << endl;
    cout << "+-----------------------------------------------+" << endl;

    // console input for selecting option, loop until user input correct data
    do
    {
        counter > 0 ? cout << "Mohon pilih salah satu pilihan!" << endl : cout << endl;

        cout << "Pilih sisi (A/B/C) : ";
        cin >> selected_option;

        selected_option = toupper(selected_option);

        counter++;
    } while (selected_option != 'A' && selected_option != 'B' && selected_option != 'C');

    cout << endl;

    map<char, string>::iterator i;
    // loop for console input based on container 'options'
    for (i = options.begin(); i != options.end(); i++)
    {
        if (i->first != selected_option)
        {
            counter = 0;
            do
            {
                if (counter > 0)
                    cout << "Mohon masukan angka lebih dari 0!" << endl;

                cout << "Nilai Sisi " << options[i->first] << " : ", cin >> segitiga[options[i->first]];
                // cin fail used if user input non integer value cause endless loop error
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }

                counter++;
            } while (!isdigit(segitiga[options[i->first]]) && segitiga[options[i->first]] <= 0);
        }
    }

    // calculate the value based on selected option
    switch (selected_option)
    {
    case 'A':
        // nilai sisi alas = akar kuadrat dari (sisi miring kuadrat - sisi tinggi kuadrat)
        segitiga["Alas"] = sqrt((pow(segitiga["Miring"], 2)) - (pow(segitiga["Tinggi"], 2)));
        break;
    case 'B':
        // nilai sisi tinggi = akar kuadrat dari (sisi miring kuadrat - sisi alas kuadrat)
        segitiga["Tinggi"] = sqrt((pow(segitiga["Miring"], 2)) - (pow(segitiga["Alas"], 2)));
        break;
    case 'C':
        // nilai sisi miring = akar kuadrat dari (sisi alas kuadrat + sisi tinggi kuadrat)
        segitiga["Miring"] = sqrt((pow(segitiga["Alas"], 2)) + (pow(segitiga["Tinggi"], 2)));
        break;
    default:
        break;
    }

    cout << endl;

    // show result to user
    cout << "\t=> Result (Sisi " << options[selected_option] << ")" << endl;
    cout << "+-----------------------------------------------+" << endl;
    cout << "\tSisi Alas\t: " << segitiga["Alas"] << endl;
    cout << "\tSisi Tinggi\t: " << segitiga["Tinggi"] << endl;
    cout << "\tSisi Miring\t: " << segitiga["Miring"] << endl;
    cout << "+-----------------------------------------------+" << endl;
    cout << "Jadi Sisi " << options[selected_option] << " dari segitiga adalah " << segitiga[options[selected_option]] << endl;

    cout << endl;

    return 0;
}