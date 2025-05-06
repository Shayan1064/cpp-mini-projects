#include <iostream>
#include <string>
using namespace std;

int main() {
    string user, pass;
    cout << "Username: ";
    cin >> user;
    cout << "Password: ";
    cin >> pass;

    if (user == "admin" && pass == "1234")
        cout << "Login successful" << endl;
    else
        cout << "Access denied" << endl;

    return 0;
}
