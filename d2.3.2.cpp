#include <iostream>
#include <map>
using namespace std;

int main() {
    long long int input_username, input_password;
    cout << "Enter your username: ";
    cin >> input_username;
    cout << "Enter your password: ";
    cin >> input_password;

    map<long long int, long long int> users;
    // Add valid usernames and passwords to the map
    users[12345] = 56789;
    users[23456] = 67890;
    users[34567] = 78901;
    users[45678] = 89012;

    if (users.count(input_username) && users[input_username] == input_password) {
        cout << "OK." << endl;
    } else {
        cout << "Error" << endl;
    }
    return 0;
}