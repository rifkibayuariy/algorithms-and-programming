#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{

    map<string, string> user_info{{"user_id", "Rifki"}, {"password", "23.11.5702"}};

    string username;
    string password;

    cout << "Please Login!" << endl;
    cout << "------------------------------" << endl;
    cout << "User ID\t\t: ", cin >> username;
    cout << "Password\t: ", cin >> password;

    if (username == user_info["user_id"] && password == user_info["password"])
        cout << "yey" << endl;
    else
        cout << "user id atau password tidak sesuai" << endl;

    system("pause");

    return 0;
}