/*
* Check Prime Number
* Author: Rifki Bayu Ariyanto
*
* Github link
* (https://github.com/rifkibayuariy/algorithms-and-programming/blob/main/05%20-%20Looping/Theory/Task/05-LoopingTask-CheckPrimeNumber.cpp)
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int number;
    cout << "\n\t+---------------------------------+" << endl;
    cout << "\t|     Prime Number Identifier     |" << endl;
    cout << "\t+---------------------------------+" << endl;
    cout << "\t  Please input integer number : ", cin >> number;

    bool prime = true;
    if (number > 1) {
        for (int i = 2; i <= sqrt(number); i ++)
            if (number % i == 0) prime = false;
    } else {
        prime = false;
    }
    
    cout << "\t+---------------------------------+" << endl;
    cout << "\t => " << number << " is " << (!prime ? "not " : "") << "a prime number" << endl;
    cout << "\n\t", system("pause");

    return 0;
}