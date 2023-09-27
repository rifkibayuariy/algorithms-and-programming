#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Please input a number : ", cin >> number;

    if (number <= 100 && number >= 86)
        cout << "A" << endl;
    else if (number <= 85 && number >= 66)
        cout << "B" << endl;
    else if (number <= 65 && number >= 46)
        cout << "C" << endl;
    else if (number <= 45 && number >= 1)
        cout << "D" << endl;
    else if (number == 0)
        cout << "E" << endl;
    else
        cout << "Nilai tidak valid" << endl;

    system("pause");

    return 0;
}