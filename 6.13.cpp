#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";
    char ch;
    cout << "Введите символ, который вы хотите удалить: ";
    cin >> ch;

    int n = str.length();
    for (int i = 0; i < n; i++) {
        if (str[i] == ch) {
            str.erase(i, 1);
            i--;
            n--;
        }
    }

    cout << "Строка после удаления " << str << endl;

    return 0;
}
