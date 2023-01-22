#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Введите строку: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = str[i + 1];
    }

    cout << "Строка после удаления символа: " << str << endl;

    return 0;
}