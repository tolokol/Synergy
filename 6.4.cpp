#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = str[i + 1];
    }

    cout << "String after removing the first character: " << str << endl;

    return 0;
}