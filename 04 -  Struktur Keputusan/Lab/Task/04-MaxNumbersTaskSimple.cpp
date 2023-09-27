/*
 * Task - Max Numbers
 * Author: Rifki Bayu Ariyanto
 *
 * Find max numbers from input
 *
 */

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, max_number;

    cout << "Input Numbers : ", cin >> a >> b >> c >> d;

    if (a > b && b > c && c > d)
        max_number = a;
    else if (b > a && b > c && b > d)
        max_number = b;
    else if (c > a && c > b && c > d)
        max_number = c;
    else if (d > a && d > b && d > c)
        max_number = d;

    cout << "Max Number : " << max_number << endl;

    system("pause");

    return 0;
}