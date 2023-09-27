/*
 * Task - Max Numbers
 * Author: Rifki Bayu Ariyanto
 *
 * Find max numbers from input
 *
 * jika tidak boleh menggunakan for maka bisa mengunjungi versi pengerjaan tugas satunya (04-MaxNumbersTaskSimple)
 * https://github.com/rifkibayuariy/algorithms-and-programming/blob/main/04%20-%20%20Struktur%20Keputusan/Lab/Task/04-MaxNumbersTaskSimple.cpp
 *
 */

#include <iostream>

using namespace std;

int main()
{
    int numbers[4] = {0, 0, 0, 0};
    int max_number = numbers[0];

    cout << "Input Numbers : ", cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3];

    // loop for check number and fix number
    for (int i = 1; i < 4; i++)
        if (numbers[i] > max_number)
            max_number = numbers[i];

    cout << "Max Number : " << max_number << endl;

    system("pause");

    return 0;
}